#include <iostream>
using namespace std;
struct node
{
    int data;
    int height;
    node *left;
    node *right;
    node(int a)
    {
        data = a;
        left = NULL;
        right = NULL;
        height = 1;
    }
};
int max(int a, int b)
{
    return a > b ? a : b;
}
int height(node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}
node *rightRotate(node *n)
{
    node *x = n->left;
    node *y = x->right;
    x->right = n;
    n->left = y;
    n->height = max(height(n->left), height(n->right)) + 1;
    x->height = max(height(x->left), height(x->right));
    return x;
}
node *leftRotate(node *n)
{
    node *x = n->right;
    node *y = x->left;
    x->left = n;
    n->right = y;
    n->height = max(height(n->left), height(n->right)) + 1;
    x->height = max(height(x->left), height(x->right)) + 1;
    return x;
}
int getBalance(node *n)
{
    if (n == NULL)
        return 0;
    return (height(n->left) - height(n->right));
}
node *insert(node *n, int data)
{
    node *a = new node(data);
    if (n == NULL)
        return (a);
    if (data < n->data)
        n->left = insert(n->left, data);
    else if (data > n->data)
        n->right = insert(n->right, data);
    else
        return n;
    n->height = max(height(n->left), height(n->right)) + 1;
    int balance = getBalance(n);
    if (balance > 1 && data < n->left->data)
        return rightRotate(n);
    if (balance < -1 && data > n->right->data)
        return leftRotate(n);
    if (balance > 1 && data > n->left->data)
    {
        n->left = leftRotate(n->left);
        return rightRotate(n);
    }
    if (balance < -1 && data < n->right->data)
    {
        n->right = rightRotate(n->right);
        return leftRotate(n);
    }
    return n;
}
node *minValueNode(node *n)
{
    node *a = n;
    while (a->left != NULL)
        a = a->left;
    return a;
}
node *deleteNode(node *root, int data)
{
    if (root == NULL)
        return root;
    if (data < root->data)
        root->left = deleteNode(root->left, data);
    else if (data > root->data)
        root->right = deleteNode(root->right, data);
    else
    {
        if ((root->left == NULL) || (root->right == NULL))
        {
            node *temp = root->left ? root->left : root->right;
            if (temp == NULL)
            {
                temp = root;
                root = NULL;
            }
            else
                root = temp;
            free(temp);
        }
        else
        {
            node *temp = minValueNode(root->right);
            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }
    if (root == NULL)
        return root;
    root->height = max(height(root->left), height(root->right)) + 1;
    int balance = getBalance(root);
    if (balance > 1 && getBalance(root->left) >= 0)
        return rightRotate(root);
    if (balance > 1 && getBalance(root->left) < 0)
    {
        root->left = leftRotate(root->left);
        return rightRotate(root);
    }
    if (balance < -1 && getBalance(root->right) <= 0)
        return leftRotate(root);
    if (balance < -1 && getBalance(root->right) > 0)
    {
        root->right = rightRotate(root->right);
        return leftRotate(root);
    }
    return root;
}
node *search(node *root, int data)
{
    if (root == NULL)
        return NULL;
    else if (root->data == data)
        return root;
    else if (root->data > data)
        return search(root->left, data);
    else
        return search(root->right, data);
}
void traverse(node *root)
{
    if (root == NULL)
        return;
    else
    {
        cout << root->data << ": ";
        if (root->left != NULL)
            cout << "l " << root->left->data;
        if (root->right != NULL)
            cout << "r " << root->right->data;
        cout << endl;
        traverse(root->left);
        traverse(root->right);
    }
}
int main()
{
    cout << "\n\n\n";
    node *root = NULL;
    int ch, n;
    char c = 'y';
    cout << "\n 1. Insert a node";
    cout << "\n 2. Delete a node";
    cout << "\n 3. Search a node";
    cout << "\n 4. Traverse the AVL tree";
    do
    {
        cout << "\n Enter choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter an element: ";
            cin >> n;
            root = insert(root, n);
            break;
        case 2:
            cout << "\n Enter an element: ";
            cin >> n;
            if (search(root, n) == NULL)
                cout << "\n Element does not exist";
            else
            {
                deleteNode(root, n);
                cout << "\n Element deleted succesfully";
            }
            break;
        case 3:
            cout << "\n Enter an element: ";
            cin >> n;
            if (search(root, n) == NULL)
                cout << "\n Element does not exist";
            else
                cout << "Element found";
            break;
        case 4:
            if (root == NULL)
                cout << "\n AVL tree is empty";
            else
                traverse(root);
            break;
        default:
            cout << "Wring choice";
            break;
        }
        cout << "\n Again? ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    cout << "\n\n\n";
    return 0;
}
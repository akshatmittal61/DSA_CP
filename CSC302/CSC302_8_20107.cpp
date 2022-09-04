#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int a)
    {
        data = a;
        left = NULL;
        right = NULL;
    }
};
node *inorderSuccessor(node *root)
{
    node *current = root;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
node *Insert(node *root, int a)
{
    if (root == NULL)
        return new node(a);
    if (root->data > a)
        root->left = Insert(root->left, a);
    else if (root->data < a)
        root->right = Insert(root->right, a);
    return root;
}
node *Delete(node *root, int a)
{
    if (root == NULL)
        return root;
    if (root->data > a)
        root->left = Delete(root->left, a);
    else if (root->data < a)
        root->right = Delete(root->right, a);
    else
    {
        if (root->left == NULL)
        {
            node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            node *temp = root->left;
            free(root);
            return temp;
        }
        node *temp = inorderSuccessor(root->right);
        root->data = temp->data;
        root->right = Delete(root->right, temp->data);
    }
    return root;
}
node *Search(node *root, int a)
{
    if (root == NULL)
        return NULL;
    if (root->data == a)
        return root;
    else if (root->data > a)
        return Search(root->left, a);
    else
        return Search(root->right, a);
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << ' ' << root->data << ' ';
    inorder(root->right);
}
int main()
{
    cout << "\n\n\n";
    node *root = NULL;
    int n, ch, k = 0;
    char c = 'n';
    cout << "\n 1. Insert an element";
    cout << "\n 2. Search for an element";
    cout << "\n 3. Delete an element";
    cout << "\n 4. Traverse the Binary Search tree";
    do
    {
        cout << "\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter value to input: ";
            cin >> n;
            if (k == 0)
                root = Insert(root, n);
            else
                Insert(root, n);
            cout << " Element inserted";
            ++k;
            break;
        case 2:
            cout << "\n Enter value to search: ";
            cin >> n;
            if (Search(root, n) == NULL)
                cout << " Element not found";
            else
                cout << " Element found";
            break;
        case 3:
            cout << "\n Enter value to delete: ";
            cin >> n;
            if (Search(root, n) == NULL)
                cout << " Node doesn't exist";
            else
            {
                Delete(root, n);
                cout << " Node deleted";
            }
        case 4:
            cout << endl;
            inorder(root);
            cout << endl;
            break;
        default:
            cout << "\n Wrong choice";
            break;
        }
        cout << "\n Again? ";
        cin >> c;
    } while (c == 'y' || c == 'Y');
    cout << "\n\n\n";
    return 0;
}
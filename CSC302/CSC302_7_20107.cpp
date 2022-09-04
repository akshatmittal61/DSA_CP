/* #include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *lchild;
    Node *rchild;
};
class Queue
{
public:
    int size, front, rear;
    Node **Q;
    Queue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        Q = new Node *[size];
    }
    ~Queue()
    {
        delete[] Q;
    }
    bool isFull()
    {
        if (rear == size - 1)
            return true;
        return false;
    }
    bool isEmpty()
    {
        if (front == rear)
            return true;
        return false;
    }
    void enqueue(Node *x)
    {
        if (isFull())
            cout << "Queue Overflow" << endl;
        else
            Q[++rear] = x;
    };
    Node *dequeue()
    {
        Node *x = nullptr;
        if (isEmpty())
            cout << "Queue Underflow" << endl;
        else
            x = Q[++front];
        return x;
    }
};
Node *root = new Node;
void createTree()
{
    Node *p;
    Node *t;
    int x;
    Queue q(10);
    cout << "Enter root value: " << flush;
    cin >> x;
    root->data = x;
    root->lchild = nullptr;
    root->rchild = nullptr;
    q.enqueue(root);
    while (!q.isEmpty())
    {
        p = q.dequeue();
        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->lchild = t;
            q.enqueue(t);
        }

        cout << "Enter left child value of " << p->data << ": " << flush;
        cin >> x;
        if (x != -1)
        {
            t = new Node;
            t->data = x;
            t->lchild = nullptr;
            t->rchild = nullptr;
            p->rchild = t;
            q.enqueue(t);
        }
    }
}
void preorder(Node *p)
{
    if (p)
    {
        cout << p->data << ", " << flush;
        preorder(p->lchild);
        preorder(p->rchild);
    }
}
void inorder(Node *p)
{
    if (p)
    {
        inorder(p->lchild);
        cout << p->data << ", " << flush;
        inorder(p->rchild);
    }
}
void postorder(Node *p)
{
    if (p)
    {
        postorder(p->lchild);
        postorder(p->rchild);
        cout << p->data << ", " << flush;
    }
}
int main()
{
    createTree();
    preorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    return 0;
} */
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << ' ' << root->data << ' ';
    preorder(root->left);
    preorder(root->right);
}
void Inorder(struct Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << ' ' << root->data << ' ';
    Inorder(root->right);
}
void PostOrder(struct Node *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << ' ' << root->data << ' ';
}
int main()
{
    cout << "\n\n\n";
    struct Node *root = new Node(98);
    root->left = new Node(80);
    root->right = new Node(45);
    root->left->left = new Node(16);
    root->left->right = new Node(21);
    cout << "\n PreOrder Traversal" << endl;
    preorder(root);
    cout << endl;
    cout << "\n Inorder Traversal" << endl;
    Inorder(root);
    cout << endl;
    cout << "\n Postorder Traversal" << endl;
    PostOrder(root);
    cout << endl;
    cout << "\n\n\n";
    return 0;
}
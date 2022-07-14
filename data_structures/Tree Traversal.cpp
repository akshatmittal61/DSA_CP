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

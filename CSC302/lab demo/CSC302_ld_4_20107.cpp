#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *left;
    struct node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void PostOrder(node *root)
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
    struct node *root = new node(5);
    root->left = new node(2);
    root->right = new node(7);
    root->left->left = new node(1);
    root->left->right = new node(3);
    root->right->left = new node(6);
    root->right->right = new node(8);
    cout << "\n Postorder Traversal" << endl;
    PostOrder(root);
    cout << "\n\n\n";
    return 0;
}

/*
        5
      2    7    
    1   3 6  8
*/
#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left, right;
    TreeNode()
    {
        val = 0;
        left = NULL;
        right = NULL;
    }
    TreeNode(int n)
    {
        val = n;
        left = NULL;
        right = NULL;
    }
};

TreeNode *inorderSuccessor(TreeNode *root)
{
    TreeNode *current = root;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
TreeNode *Insert(TreeNode *root, int a)
{
    if (root == NULL)
        return new TreeNode(a);
    if (root->val > a)
        root->left = Insert(root->left, a);
    else if (root->val < a)
        root->right = Insert(root->right, a);
    return root;
}
TreeNode *Delete(TreeNode *root, int a)
{
    if (root == NULL)
        return root;
    if (root->val > a)
        root->left = Delete(root->left, a);
    else if (root->val < a)
        root->right = Delete(root->right, a);
    else
    {
        if (root->left == NULL)
        {
            TreeNode *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            TreeNode *temp = root->left;
            free(root);
            return temp;
        }
        TreeNode *temp = inorderSuccessor(root->right);
        root->val = temp->val;
        root->right = Delete(root->right, temp->val);
    }
    return root;
}
node *Search(node *root, int a)
{
    if (root == NULL)
        return NULL;
    if (root->val == a)
        return root;
    else if (root->val > a)
        return Search(root->left, a);
    else
        return Search(root->right, a);
}
void preorder(struct Node *root)
{
    if (root == NULL)
        return;
    cout << root->val << ' ';
    preorder(root->left);
    preorder(root->right);
}
void Inorder(struct Node *root)
{
    if (root == NULL)
        return;
    Inorder(root->left);
    cout << root->val << ' ';
    Inorder(root->right);
}
void PostOrder(struct Node *root)
{
    if (root == NULL)
        return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout << root->val << ' ';
}

void solve()
{
    int n;
    cin>>n;
    fl(i,n)
    {
        int k;
        cin>>k;
    }
}

int main()
{
    _ fs
        ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
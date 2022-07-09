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

class ListNode
{
public:
    int val;
    ListNode *next;
    ListNode()
    {
        val = 0;
        next = NULL;
    }
    ListNode(int n)
    {
        val = n;
        next = NULL;
    }
};
void insertion_head(ListNode *&head, int n)
{
    ListNode *newListNode = new ListNode(n);
    newListNode->next = head;
    head = newListNode;
}
void insertion_tail(ListNode *&head, int n)
{
    ListNode *newListNode = new ListNode(n);
    if (head == NULL)
        head = newListNode;
    else
    {
        ListNode *temp;
        for (temp = head; temp->next != NULL; temp = temp->next)
            ;
        temp->next = newListNode;
    }
}
void insertion_mid(ListNode *&head, int n, int l)
{
    ListNode *newListNode = new ListNode(n);
    if (head == NULL)
    {
        newListNode->next = NULL;
        head = newListNode;
    }
    else
    {
        ListNode *temp;
        for (temp = head; temp->val != l; temp = temp->next)
            ;
        newListNode->next = temp->next;
        temp->next = newListNode;
    }
}
void delete_head(ListNode *&head)
{
    ListNode *delListNode = head;
    head = head->next;
    delete delListNode;
}
void delete_tail(ListNode *&head)
{
    if (head == NULL)
        throw "Deletion not possible";
    else
    {
        ListNode *temp;
        for (temp = head; temp->next->next != NULL; temp = temp->next)
            ;
        ListNode *delListNode = temp->next;
        temp->next = NULL;
        delete delListNode;
    }
}
void traverse(ListNode *&head)
{
    ListNode *temp;
    if (head == NULL)
        return;
    for (temp = head->next; temp != NULL; temp = temp->next)
        cout << temp->val << ' ';
}

ListNode *removeElements(ListNode *head, int val)
{
    ListNode *temp = head->next;
    while (temp != NULL)
    {
        if (val == temp->val)
        {
            ListNode *delNode = temp;
            temp = temp->next;
            // delete delNode;
        }
        else
            temp = temp->next;
    }
    return head;
}

void solve()
{
    int n, k;
    ListNode *head;
    cin >> n >> k;
    fl(i, n)
    {
        int l;
        cin >> l;
        insertion_tail(head, l);
    }
    ListNode *ans = removeElements(head, k);
    traverse(ans);
}

int main()
{
    _ fs
        ll test = 1;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
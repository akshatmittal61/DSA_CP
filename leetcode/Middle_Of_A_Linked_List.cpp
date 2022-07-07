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
    int data;
    ListNode *next;
    ListNode(int n)
    {
        data = n;
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
    {
        head = newListNode;
    }
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
        for (temp = head; temp->data != l; temp = temp->next)
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
    for (temp = head; temp != NULL; temp = temp->next)
        cout << temp->data << ' ';
}

ListNode *middleNode(ListNode *head)
{
    ListNode *temp = head;
    int n = 0, k = 0;
    while (temp != NULL)
    {
        ++n;
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        ++k;
        temp = temp->next;
        if (n & 1)
        {
            if (k == (n + 1) / 2)
                return temp;
        }
        else if (k == n / 2)
            return temp;
    }
    return temp;
}

void solve()
{
    int n;
    cin >> n;
    ListNode *head;
    fl(i, n)
    {
        int k;
        cin >> k;
        insertion_tail(head, k);
    }
    ListNode *ans = middleNode(head);
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
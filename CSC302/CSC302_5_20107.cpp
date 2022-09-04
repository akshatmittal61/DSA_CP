#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int n)
    {
        data = n;
        next = NULL;
    }
};
void insertion_head(node *&head, int n)
{
    node *newNode = new node(n);
    newNode->next = head;
    head = newNode;
}
void insertion_tail(node *&head, int n)
{
    node *newNode = new node(n);
    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        node *temp;
        for (temp = head; temp->next != NULL; temp = temp->next)
            ;
        temp->next = newNode;
    }
}
void insertion_mid(node *&head, int n, int l)
{
    node *newNode = new node(n);
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        node *temp;
        for (temp = head; temp->data != l; temp = temp->next)
            ;
        newNode->next = temp->next;
        temp->next = newNode;
    }
}
void delete_head(node *&head)
{
    node *delNode = head;
    head = head->next;
    delete delNode;
}
void delete_tail(node *&head)
{
    if (head == NULL)
    {
        cout << "\n Deletion not possible";
    }
    else
    {
        node *temp;
        for (temp = head; temp->next->next != NULL; temp = temp->next)
            ;
        node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }
}
void display(node *&head)
{
    node *temp;
    cout << endl;
    for (temp = head; temp != NULL; temp = temp->next)
        cout << ' ' << temp->data << ' ';
    cout << endl;
}
int main()
{
    cout << "\n\n\n";
    int ch, n, l;
    char c = 'y';
    node *head = NULL;
    cout << "\n 1. Insert at Head";
    cout << "\n 2. Insert at Tail";
    cout << "\n 3. Insert in middle";
    cout << "\n 4. Delete from head";
    cout << "\n 5. Delete from tail";
    cout << "\n 6. Display the list";
    do
    {
        cout << "\n Enter you choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter a value: ";
            cin >> n;
            insertion_head(head, n);
            break;
        case 2:
            cout << "\n Enter a value: ";
            cin >> n;
            insertion_tail(head, n);
            break;
        case 3:
            cout << "\n Enter a value: ";
            cin >> n;
            cout << "\n Enter position value: ";
            cin >> l;
            insertion_mid(head, n, l);
            break;
        case 4:
            delete_head(head);
            break;
        case 5:
            delete_tail(head);
            break;
        case 6:
            display(head);
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
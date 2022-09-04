#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
    node(int a)
    {
        data = a;
        next = NULL;
    }
};
bool search(node *&head, int a)
{
    node *temp;
    for (temp = head; temp != NULL; temp = temp->next)
        if (temp->data == a)
            return true;
    return false;
}
void insert_head(node *&head, int n)
{
    node *temp = new node(n);
    temp->next = head;
    head = temp;
    cout << "\n Insertion Successfull";
}
void insert_tail(node *&head, int n)
{
    node *newNode = new node(n);
    if (head == NULL)
        head = newNode;
    else
    {
        node *temp;
        for (temp = head; temp->next != NULL; temp = temp->next)
            ;
        temp->next = newNode;
    }
    cout << "\n Insertion Successfull";
}
void insert_mid(node *&head, int n, int l)
{
    node *newNode = new node(n);
    if (head == NULL)
    {
        newNode->next = NULL;
        head = newNode;
    }
    else
    {
        if (search(head, l))
        {
            node *temp;
            for (temp = head; temp->data != l; temp = temp->next)
                ;
            newNode->next = temp->next;
            temp->next = newNode;
            cout << "\n Insertion Successfull";
        }
        else
            cout << "\n Element not found to insert in front of";
    }
}
void delete_head(node *&head)
{
    if (head == NULL)
        cout << "\n Deletion not possible";
    else
    {
        node *delNode = head;
        head = head->next;
        delete delNode;
        cout << "\n Element deleted succesfully";
    }
}
void delete_mid(node *&head, int n)
{
    if (head == NULL)
        cout << "\n Deletion not possible";
    else
    {
        if (search(head, n))
        {
            node *temp, *delNode;
            for (temp = head; temp->next->data != n; temp = temp->next)
                ;
            delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
            cout << "\n Element deleted succesfully";
        }
        else
            cout << "\n Element not found";
    }
}
void delete_tail(node *&head)
{
    if (head == NULL)
        cout << "\n Deletion not possible";
    else
    {
        node *temp;
        for (temp = head; temp->next->next != NULL; temp = temp->next)
            ;
        node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
        cout << "\n Element deleted succesfully";
    }
}
void traverse(node *&head)
{
    if (head == NULL)
        cout << "\n Linked List is empty";
    else
    {
        node *temp;
        cout << endl;
        for (temp = head; temp != NULL; temp = temp->next)
            cout << ' ' << temp->data << ' ';
        cout << endl;
    }
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
    cout << "\n 6. Delete in middle";
    cout << "\n 7. Search for an element";
    cout << "\n 8. Traverse the list";
    do
    {
        cout << "\n Enter you choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter a value: ";
            cin >> n;
            insert_head(head, n);
            break;
        case 2:
            cout << "\n Enter a value: ";
            cin >> n;
            insert_tail(head, n);
            break;
        case 3:
            cout << "\n Enter a value: ";
            cin >> n;
            cout << "\n Enter position value: ";
            cin >> l;
            insert_mid(head, n, l);
            break;
        case 4:
            delete_head(head);
            break;
        case 5:
            delete_tail(head);
            break;
        case 6:
            cout << "\n Enter value to be deleted: ";
            cin >> n;
            delete_mid(head, n);
            break;
        case 7:
            cout << "\n Enter value to search: ";
            cin >> n;
            if (search(head, n))
                cout << "\n Element found";
            else
                cout << "\n Element not found";
            break;
        case 8:
            traverse(head);
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
#include <iostream>
using namespace std;
class node
{
public:
    float coefficient;
    int exponent;
    node *next;
    node()
    {
        coefficient = 0;
        exponent = 0;
        next = NULL;
    }
    node(float c, int e)
    {
        this->coefficient = c;
        this->exponent = e;
        next = NULL;
    }
};
node *insert(node *head, float c, int e)
{
    node *newNode = new node(c, e);
    if (head == NULL)
    {
        head = newNode;
        return head;
    }
    else
    {
        node *temp = head;
        for (temp = head; temp->next != NULL;)
        {
            if (temp->next->exponent > e)
                temp = temp->next;
            else
                break;
        }
        if (temp == head && e > temp->exponent)
        {
            newNode->next = temp;
            head = newNode;
        }
        else
        {
            newNode->next = temp->next;
            temp->next = newNode;
        }
        return head;
    }
}
node *create(node *head)
{
    int n, e;
    float c;
    cout << "\n Enter the number of terms: ";
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cout << " Enter the coefficient: ";
        cin >> c;
        cout << " Enter exponent: ";
        cin >> e;
        head = insert(head, c, e);
    }
    return head;
}
void print(node *head)
{
    if (head == NULL)
        cout << "The list is empty";
    else
    {
        int j = 0;
        node *temp = head;
        while (temp != NULL)
        {
            cout << " (" << temp->coefficient << ")x^" << temp->exponent << " +";
            temp = temp->next;
            j++;
        }
    }
}
void addition(node *head1, node *head2)
{
    node *temp1 = head1;
    node *temp2 = head2;
    node *head3 = NULL;
    while (temp1 != NULL && temp2 != NULL)
    {
        if (temp1->exponent == temp2->exponent)
        {
            head3 = insert(head3, temp1->coefficient + temp2->coefficient, temp1->exponent);
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        else if (temp1->exponent > temp2->exponent)
        {
            head3 = insert(head3, temp1->coefficient, temp1->exponent);
            temp1 = temp1->next;
        }
        else
        {
            head3 = insert(head3, temp2->coefficient, temp2->exponent);
            temp2 = temp2->next;
        }
    }
    while (temp1 != NULL)
    {
        head3 = insert(head3, temp1->coefficient, temp1->exponent);
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        head3 = insert(head3, temp2->coefficient, temp2->exponent);
        temp2 = temp2->next;
    }
    print(head3);
}
int main()
{
    cout << "\n\n\n";
    node *head1 = NULL;
    node *head2 = NULL;
    cout << "\n Enter the first polynomial (f): ";
    head1 = create(head1);
    cout << "\n Enter the second polynomial (f): ";
    head2 = create(head2);
    cout << "\n\n\n The first polynomial (f): ";
    print(head1);
    cout << "\n\n\n The second polynomial (g): ";
    print(head2);
    cout << "\n\n\n Final Result (f+g) : ";
    addition(head1, head2);
    cout << "\n\n\n";
    return 0;
}
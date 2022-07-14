#include <iostream>
#define SIZE 100
using namespace std;
struct queue
{
    int array[SIZE];
    int front, rear;
};
void init(queue *a)
{
    a->front = -1;
    a->rear = -1;
}
void EnQueue(queue *a, int n)
{
    if (a->rear == SIZE - 1)
        cout << "\n Queue is full! Insertion is not possible";
    else
    {
        a->rear++;
        a->array[a->rear] = n;
        cout << "\n Insertion successfull!";
    }
}
void DeQueue(queue *a)
{
    if (a->front == a->rear)
        cout << "\n Queue is empty! Deletion is not possible";
    else
    {
        cout << "\n The deleted element: " << a->array[a->front];
        a->front++;
    }
    if (a->front == a->rear)
    {
        a->front = -1;
        a->rear = -1;
    }
}
void traverse(queue *a)
{
    if (a->front == a->rear)
        cout << "\n Queue is empty";
    else
        for (int i = a->front + 1; i <= a->rear; i++)
            cout << " " << a->array[i];
}
int isEmpty(queue *a)
{
    if (a->front == a->rear)
        return 1;
    else
        return 0;
}
int isFull(queue *a)
{
    if (a->rear == SIZE - 1)
        return 1;
    else
        return 0;
}
int main()
{
    cout << "\n\n\n";
    queue a;
    int ch, n;
    char r = 'y';
    init(&a);
    cout << "\n 1. EnQueue";
    cout << "\n 2. DeQueue";
    cout << "\n 3. Traverse";
    cout << "\n 4. Check the capacity";
    do
    {
        cout << "\n Enter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\n Enter the element: ";
            cin >> n;
            EnQueue(&a, n);
            break;
        case 2:
            DeQueue(&a);
            break;
        case 3:
            traverse(&a);
            break;
        case 4:
            if (isFull(&a))
                cout << "\n The queue is full";
            else if (isEmpty(&a))
                cout << "\n The queue is empty";
            else
                cout << "\n Queue is neither empty nor full";
            break;
        default:
            cout << "\n Wrong choice";
            break;
        }
        cout << "\n Again? ";
        cin >> r;
    } while (r == 'y' || r == 'Y');
    cout << "\n\n\n";
    return 0;
}
#include <iostream>
using namespace std;
#define MAX 100
struct STACK
{
    int arr[MAX];
    int top;
};
void init(STACK *s)
{
    s->top = -1;
}
void push(STACK *s, int n)
{
    if (s->top == (MAX - 1))
    {
        cout << "\n Stack Overflow. Can't push element";
        exit(-1);
    }
    else
    {
        ++s->top;
        s->arr[s->top] = n;
        cout << "\n Push successful";
    }
}
int pop(STACK *s)
{
    if (s->top == -1)
    {
        cout << "\n Stack Underflow. Can't pop element";
        return -1;
    }
    else
    {
        cout << "\n Pop successful";
        return (s->arr[s->top--]);
    }
}
int isEmpty(STACK *s)
{
    if (s->top == -1)
        return 1;
    else
        return 0;
}
int isFull(STACK *s)
{
    if (s->top == MAX - 1)
        return 1;
    else
        return 0;
}
void traverse(STACK *s)
{
    cout << endl;
    if (!isEmpty(s))
        for (int i = s->top; i >= 0; --i)
            cout << s->arr[i] << ' ';
    else
        cout << "\n Stack is empty";
}
int main()
{
    STACK a;
    int ch, n;
    char r = 'y';
    init(&a);
    cout << "\n 1. Push";
    cout << "\n 2. Pop";
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
            push(&a, n);
            break;
        case 2:
            n=pop(&a);
            cout << "\n Outcome: " << n;
            break;
        case 3:
            traverse(&a);
            break;
        case 4:
            if (isFull(&a))
                cout << "\n The stack is full";
            else if (isEmpty(&a))
                cout << "\n The stack is empty";
            else
                cout << "\n Stack is neither empty nor full";
            break;
        default:
            cout << "\n Wrong choice";
            break;
        }
        cout << "\n Again? ";
        cin>>r;
    } while (r == 'y' || r == 'Y');
    return 0;
}
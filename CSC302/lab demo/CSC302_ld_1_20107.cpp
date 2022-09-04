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
    s->top = 3;
    for (int i = 0; i < 4; ++i)
        s->arr[i] = i * 2;
}
int pop(STACK *s)
{
    if (s->top == -1)
    {
        cout << "\n Stack underflow reached. Unable to pop element";
        return -1;
    }
    else
    {
        cout << "\n Stack Pop successful.";
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
int main()
{
    cout << "\n\n\n";
    STACK a;
    init(&a);
    int ch = 0, n;
    cout << "\n 1. Show the contents of stack.";
    cout << "\n 2. Pop an element";
    cout << "\n 3. Check if stack is underflow";
    cout << "\n\n Enter choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        if (!isEmpty(&a))
            for (int i = a.top; i >= 0; --i)
                cout << ' ' << a.arr[i] << ' ';
        else
            cout << "\n Stack underflow reached.";
        break;
    case 2:
        n = pop(&a);
        cout << "\n Outcome: \n "<< n;
        break;
    case 3:
        if (isEmpty(&a))
            cout << "\n Stack underflow reached.";
        else
            cout << "\n Stack has some contents. Press 1 to view";
        break;
    default:
        break;
    }
    cout << "\n\n\n";
    return 0;
}
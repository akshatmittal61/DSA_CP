#include <iostream>
using namespace std;
#define MAX 100
template <class T>
class Stack
{
public:
    T data[MAX];
    int top;
    Stack() { top = -1; }
    void push(T n)
    {
        if (top == (MAX - 1))
        {
            cout << "\n Stack Overflow. Can't push element";
            exit(-1);
        }
        else
        {
            data[++top] = n;
            cout << "\n Push successful";
        }
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "\n Stack Underflow. Can't pop element";
            return -1;
        }
        else
        {
            cout << "\n Pop successful";
            return (data[top--]);
        }
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }
    bool isFull()
    {
        if (top == MAX - 1)
            return true;
        else
            return false;
    }
    void traverse()
    {
        cout << endl;
        if (!isEmpty())
            for (int i = top; i >= 0; --i)
                cout << data[i] << ' ';
        else
            cout << "\n Stack is empty";
    }
};
int main()
{
    Stack<int> a;
    int ch, n;
    char r = 'y';
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
            a.push(n);
            break;
        case 2:
            n = a.pop();
            cout << "\n Outcome: " << n;
            break;
        case 3:
            a.traverse();
            break;
        case 4:
            if (a.isFull())
                cout << "\n The stack is full";
            else if (a.isEmpty())
                cout << "\n The stack is empty";
            else
                cout << "\n Stack is neither empty nor full";
            break;
        default:
            cout << "\n Wrong choice";
            break;
        }
        cout << "\n Again? ";
        cin >> r;
    } while (r == 'y' || r == 'Y');
    return 0;
}

// os viva tuesday
// oops lab demo thursday
// dbms ut(sql, normalization, transaction) wednesday
// cn lab report 
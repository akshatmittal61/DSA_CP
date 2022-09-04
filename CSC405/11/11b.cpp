#include <iostream>
using namespace std;
template <typename T>
class Calc
{
public:
    T a, b;
    Calc(T x, T y)
    {
        a = x;
        b = y;
    }
    T add() { return a + b; }
    T subtract() { return a - b; }
    T multiply() { return a * b; }
    T divide()
    {
        try
        {
            if (b == 0)
                throw 0;
            return a / b;
        }
        catch (T x)
        {
            cout << "\n Can't divide by " << x;
            return 0;
        }
    }
};
int main()
{
    Calc<int> c(5, 2);
    char d;
    cin >> d;
    switch (d)
    {
    case '+':
        cout << c.add();
        break;
    case '-':
        cout << c.subtract();
        break;
    case '*':
        cout << c.multiply();
        break;
    case '/':
        cout << c.divide();
        break;
    default:
        cout << "Wrong Choice";
        break;
    }
    return 0;
}
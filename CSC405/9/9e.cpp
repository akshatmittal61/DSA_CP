#include <iostream>
using namespace std;
int square(int a) { return a * a; }
int sum(int n)
{
    int s = square(n);
    while (n--)
        s += square(n);
    return s;
}
void display(int a)
{
    try
    {
        if (a < 0)
            throw a;
        else
            cout << sum(a);
    }
    catch (int b)
    {
        cout << "\n Don't enter negative number";
    }
}
int main()
{
    int a;
    cout << "\n Enter a number: ";
    cin >> a;
    display(a);
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    cout << "\n\n";
    int a, b;
    cout << "\n Enter 2 values: ";
    cin >> a >> b;
    try
    {
        if (b == 0)
            throw 0;
        cout << " a/b: " << a / b;
    }
    catch (int err)
    {
        cout << "\n Can't divide by 0";
    }
    cout << "\n\n";
    return 0;
}
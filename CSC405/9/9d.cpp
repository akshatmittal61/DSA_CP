#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "\n a: ";
    try
    {
        cin >> a;
        if (a == 2)
            throw 2;
        try
        {
            if (a == 1)
                throw 1;
            cout << a;
        }
        catch (int a)
        {
            cout << "\n Innermost one";
        }
    }
    catch (int a)
    {
        cout << "\n Outermost one";
    }
    cout << "\n\n";
    return 0;
}
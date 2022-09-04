#include <iostream>
using namespace std;
int main()
{
    char a;
    cout << "\n Enter a character: ";
    cin >> a;
    try
    {
        if (a >= '0' && a <= '9')
            throw 1;
        else
            throw a;
    }
    catch (int a)
    {
        cout << "\n Thrown digit: " << a;
    }
    catch (...)
    {
        cout << "\n it was some other character";
    }
    cout << "\n\n";
    return 0;
}
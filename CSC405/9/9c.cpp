#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "\n 1. int";
    cout << "\n 2. char";
    cout << "\n Enter an option: ";
    cin >> a;
    try
    {
        if (a == 1)
            throw 1;
        else if (a == 2)
            throw 'a';
        else
            throw 2.5;
    }
    catch (int a)
    {
        cout << "\n Option 1: int";
    }
    catch (char a)
    {
        cout << "\n Option 2: char";
    }
    catch (...)
    {
        cout << "\n Wrong Option";
    }
    cout << "\n\n";
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;
    cout << a << endl;
    cout << &a << endl;
    int *p = &a;
    cout << p << endl;
    cout << *p << endl;
    cout << sizeof(a) << endl;
    cout << sizeof(p) << endl;
    a++;
    cout << a << endl;
    cout << *p << endl;
    return 0;
}

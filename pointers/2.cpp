#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    cout << p << endl;
    ++p;
    cout << p << endl;
    cout << p - 1 << endl;
    return 0;
}

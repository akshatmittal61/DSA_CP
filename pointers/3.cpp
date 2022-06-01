#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] = {2, 8, 4};
    cout << a << endl;
    cout << &a[0] << endl;
    cout << *a << ' ' << *(a + 1) << ' ' << *(1 + a) << endl;
    for (int i = 0; i < 3; ++i)
        cout << a[i] << ' ' << i[a] << endl;
    cout << sizeof(a) << endl;
    cout << &a << endl;
    return 0;
}

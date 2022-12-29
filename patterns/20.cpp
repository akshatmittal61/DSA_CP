#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/

void pattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cout << "*";
        for (int k = 1; k <= n - i; ++k)
            cout << "  ";
        for (int j = 1; j <= i; ++j)
            cout << "*";
        cout << endl;
    }
    for (int i = 1; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
            cout << "*";
        for (int k = 1; k <= i; ++k)
            cout << "  ";
        for (int j = i; j < n; ++j)
            cout << "*";
        cout << endl;
    }
}

int main()
{
    _ fs
        ll n = 5;
    cin >> n;
    pattern(n);
    return 0;
}
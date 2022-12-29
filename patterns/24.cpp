#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

    *
   * *
  * * *
 * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/

void pattern(int n)
{
    for (int i = 0; i <= 2 * (n - 1); ++i)
    {
        if (i < n)
        {
            for (int j = i; j < n - 1; ++j)
                cout << ' ';
            for (int k = 0; k <= i; ++k)
                cout << "* ";
        }
        else
        {
            for (int j = n; j <= i; ++j)
                cout << ' ';
            for (int k = 0; k < (2 * n) - i - 1; ++k)
                cout << "* ";
        }
        cout<< endl;
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
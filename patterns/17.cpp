#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

   A
  ABA
 ABCBA
ABCDCBA

*/

void pattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n - i; ++j)
            cout << " ";
        for (int k = 1; k <= i; ++k)
            cout << char(k + 64);
        for (int k = i - 1; k >= 1; --k)
            cout << char(k + 64);
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
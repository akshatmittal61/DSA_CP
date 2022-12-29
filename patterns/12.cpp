#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/

void pattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= i; ++j)
            cout << j << ' ';
        for (int k = 1; k <= 2 * (n - i); ++k)
            cout << "  ";
        for (int j = i; j >= 1; --j)
            cout << j << ' ';
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
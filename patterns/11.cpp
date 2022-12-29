#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

void pattern(int n)
{
    int k = 0;
    for (int i = 1; i <= n; ++i)
    {
        k = i % 2 + 1;
        for (int j = 1; j <= i; ++j)
        {
            ++k;
            cout << k % 2 << ' ';
        }
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
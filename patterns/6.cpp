#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

1 2 3 4 5
1 2 3 4
1 2 3
1 2
1

*/

void pattern(int n)
{
    for (int i = n; i >= 1; --i)
    {
        for (int j = 1; j <= i; ++j)
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
#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

4 4 4 4 4 4 4
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4

*/

void pattern(int n)
{
    for (int i = 1; i <= n; ++i)
    {
        int s = n;
        for (int j = 1; j < i; ++j)
            cout << s-- << ' ';
        for (int j = i; j <= n; ++j)
            cout << s << ' ';
        for (int j = i; j < n; ++j)
            cout << s << ' ';
        for (int j = 1; j < i; ++j)
            cout << ++s << ' ';
        cout << endl;
    }
    for (int i = n - 1; i >= 1; --i)
    {
        int s = n;
        for (int j = 1; j < i; ++j)
            cout << s-- << ' ';
        for (int j = i; j <= n; ++j)
            cout << s << ' ';
        for (int j = i; j < n; ++j)
            cout << s << ' ';
        for (int j = 1; j < i; ++j)
            cout << ++s << ' ';
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
#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    int x, y;
    cin >> x >> y;
    int a = abs(y - x);
    if (x == y)
        cout << 0;
    else if (x < y)
        cout << a;
    else
    {
        if (a % 2 == 0)
            cout << a / 2;
        else
            cout << ((a + 1) / 2) + 1;
    }
}

int main()
{
    _ fs
        ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
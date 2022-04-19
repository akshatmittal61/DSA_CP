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
    ll n, m;
    cin >> n >> m;
    if (n == m)
    {
        cout << 2 * (n - 1);
        return;
    }
    if (n == 1 || m == 1)
    {
        if (abs(n - m) > 1)
            cout << -1;
        else
            cout << 1;
        return;
    }
    ll s = 0;
    ll l = min(n, m);
    s += 2 * (l - 1);
    ll j = abs(n - m);
    if (j % 2 == 0)
        s += (2 * j);
    else
        s += (2 * j) - 1;
    cout << s;
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
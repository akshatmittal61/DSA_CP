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
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    ll t = max(max(a, b), max(c, d));
    a = t - a;
    b = t - b;
    c = t - c;
    d = t - d;
    if (a != 0)
        cout << a << ' ';
    if (b != 0)
        cout << b << ' ';
    if (c != 0)
        cout << c << ' ';
    if (d != 0)
        cout << d << ' ';
}

int main()
{
    _ fs
    solve();
    return 0;
}
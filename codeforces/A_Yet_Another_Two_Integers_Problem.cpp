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
    ll a, b;
    cin >> a >> b;
    int c = max(a, b), d = min(a, b);
    if (a == b)
    {
        cout << 0;
        return;
    }
    else if (abs(a - b) < 10)
    {
        cout << 1;
        return;
    }
    int k = (c - d) / 10;
    if ((c - d) % 10 == 0)
        cout << k;
    else
        cout << k + 1;
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
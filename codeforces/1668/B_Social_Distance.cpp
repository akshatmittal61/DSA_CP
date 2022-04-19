#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> v;
    fl(i, n)
    {
        ll l;
        cin >> l;
        v.pb(l);
    }
    sortrev(v);
    if (n > m)
    {
        cout << "NO";
        return;
    }
    ll reqs = 0;
    for (ll i = 0; i < n - 1; i++)
        reqs += v[i] + 1;
    reqs += v[0] + 1;
    if (reqs <= m)
        cout << "YES";
    else
        cout << "NO";
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
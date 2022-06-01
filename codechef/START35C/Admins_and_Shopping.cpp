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
    ll n, x;
    cin >> n >> x;
    vector<ll> v, a;
    fl(i, n)
    {
        ll l;
        cin >> l;
        v.pb(l);
    }
    sortrev(v);
    ll i = n, ans = n;
    while (x)
    {
        if (i == n)
        {
            ++ans;
            i = 0;
        }
        x -= v[i++];
    }
    cout << ans;
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
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

ll hcf(ll a, ll b)
{
    return b != 0 ? hcf(b, a % b) : a;
}

void solve()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    fl(i, n) cin >> v[i];
    sortall(v);
    ll s = v[0];
    for (int i = 0; i < n; ++i)
        s = hcf(s, v[i]);
    cout << s * n;
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
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

ll hcf(ll a, ll b)
{
    ll hcf;
    for (ll i = 1; i <= (a < b ? a : b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            hcf = i;
    }
    return hcf;
}
ll lcm(ll a, ll b, ll H)
{
    ll t = a * b;
    ll r = H;
    return t / r;
}
ll g(ll a, ll b)
{
    ll H = hcf(a, b);
    return hcf(a, b) + lcm(a, b, H);
}

void solve()
{
    ll n;
    cin >> n;
    ll a, b;
    vector<ll> v;
    for (ll i = 1; i < n; ++i)
    {
        a = i, b = n - i;
        v.push_back(g(a, b));
    }
    sortall(v);
    int ans = 1, i = 0;
    while (v[i] == v[i + 1])
    {
        ++ans;
        ++i;
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
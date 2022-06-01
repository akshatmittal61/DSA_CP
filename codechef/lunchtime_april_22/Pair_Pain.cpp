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
    ll n;
    cin >> n;
    vector<ll> v;
    fl(i, n)
    {
        ll l;
        cin >> l;
        v.push_back(l);
    }
    ll s = 0;
    ll n2 = 0, n1 = 0;
    fl(i, n)
    {
        if (v[i] == 2)
            ++n2;
        if (v[i] == 1)
            ++n1;
    }
    for (ll i = 1; i <= n1; i++)
        s += (n - i);
    for (ll i = 1; i < n2; i++)
        s += i;
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
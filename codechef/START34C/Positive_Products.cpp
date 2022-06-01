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
    vector<ll> a;
    ll po = 0, ne = 0;
    fl(i, n)
    {
        ll k;
        cin >> k;
        if (k > 0)
            ++po;
        else if (k < 0)
            ++ne;
    }
    ll l = 0;
    l += (po * (po - 1)) / 2;
    l += (ne * (ne - 1)) / 2;
    cout << l;
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
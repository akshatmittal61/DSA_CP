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
    ll n, k;
    cin >> n >> k;
    vector<ll> a, b;
    fl(i, n)
    {
        ll l;
        cin >> l;
        a.push_back(l);
    }
    fl(i, n)
    {
        ll l;
        cin >> l;
        b.push_back(l);
    }
    fl(i, n - 1)
    {
        ll p = min(a[i], b[i]);
        ll q = min(a[i + 1], b[i + 1]);
        ll r = max(a[i], b[i]);
        ll s = max(a[i + 1], b[i + 1]);
        if (abs(p - q) <= k || abs(r - s) <= k || abs(p - s) <= k || abs(q - r) <= k)
            continue;
        else
        {
            cout << "No";
            return;
        }
    }
    cout << "Yes";
}

int main()
{
    _ fs
    solve();
    return 0;
}
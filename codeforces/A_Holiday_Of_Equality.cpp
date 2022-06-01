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
    vector<ll> a;
    cin >> n;
    fl(i, n)
    {
        ll k;
        cin >> k;
        a.push_back(k);
    }
    ll max = a[0];
    fl(i, n) if (a[i] > max)
        max = a[i];
    ll s = 0;
    fl(i, n)
        s += max - a[i];
    cout << s;
}

int main()
{
    _ fs
    solve();
    return 0;
}
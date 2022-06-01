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
        int l;
        cin >> l;
        v.push_back(l);
    }
    sortall(v);
    cout << v[n - 1] - v[0];
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
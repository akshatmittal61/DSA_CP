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
    ll n, b, x, y, k;
    cin >> n >> b >> x >> y;
    vector<ll> arr;
    ll s = 0;
    arr.push_back(0);
    for (int i = 0; i < n; i++)
    {
        if (arr.back() + x > b)
            k = arr.back() - y;
        else
            k = arr.back() + x;
        arr.push_back(k);
        s += arr.back();
    }
    cout << s << endl;
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
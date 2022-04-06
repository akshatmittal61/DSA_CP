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
    ll s = 0;
    fl(i, n)
    {
        ll l;
        cin >> l;
        s += l;
    }
    ll m = 1;
    ll x = 0;
    do
    {
        x = (m * (m + 1)) / 2;
        if (s - x == m)
        {
            cout << m;
            return;
        }
        if (s - x > m)
            ++m;
    } while (s - x > m);
    cout << m;
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
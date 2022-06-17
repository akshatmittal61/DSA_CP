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
    ll t, i = k - 1;
    if (n % 2 == 0)
        t = n / 2;
    else
        t = (n / 2) + 1;
    if (k <= t)
        cout << (2 * k) - 1;
    else
        cout << 2 * ((i - t) + 1);
}

int main()
{
    _ fs
    solve();
    return 0;
}
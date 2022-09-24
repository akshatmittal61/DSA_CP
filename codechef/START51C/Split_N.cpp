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

ll Ans(ll n)
{
    ll ans = 0;
    while (n > 1)
    {
        if ((n & (n - 1)) == 0)
            return ans;
        ll p = (ll)pow(2, (ll)log2(n));
        n -= p;
        ++ans;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    cout << Ans(n);
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
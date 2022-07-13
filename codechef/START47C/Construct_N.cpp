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

bool canBe(ll n)
{
    if (n % 2 == 0 || n % 7 == 0)
        return true;
    ll x = 0;
    ll y = 0;
    while ((2 * x) < n)
    {
        y = (n - (2 * x)) % 7;
        if (y == 0)
            return true;
        ++x;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    if (canBe(n))
        cout << "YES";
    else
        cout << "NO";
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
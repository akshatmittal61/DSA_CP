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
    if (n % 3 == 0)
        cout << n / 3 << ' ' << n / 3;
    else if (n % 3 == 1)
        cout << (n + 2) / 3 << ' ' << (n - 1) / 3;
    else
        cout << (n - 2) / 3 << ' ' << (n + 1) / 3;
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
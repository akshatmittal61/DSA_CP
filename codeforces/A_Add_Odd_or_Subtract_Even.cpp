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
    ll a, b;
    cin >> a >> b;
    ll k = abs(a - b);
    if (a == b)
        cout << 0;
    else if (a > b)
    {
        if (k % 2 == 0)
            cout << 1;
        else
            cout << 2;
    }
    else
    {
        if (k % 2 == 0)
            cout << 2;
        else
            cout << 1;
    }
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
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
    ll n, x;
    cin >> n >> x;
    if (n & 1)
    {
        int k = (n - 1) / 2;
        for (int i = -k; i <= k; i++)
        {
            if (i == 0)
                continue;
            else
                cout << i << ' ';
        }
    }
    else
    {
        int k = (n - 2) / 2;
        for (int i = -k; i <= k; i++)
            cout << i << ' ';
    }
    cout << n * x;
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
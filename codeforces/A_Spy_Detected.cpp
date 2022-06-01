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
    int n;
    cin >> n;
    int a[n];
    fl(i, n) cin >> a[i];
    if (a[0] != a[1] && a[0] != a[2])
    {
        cout << 1;
        return;
    }
    if (a[n - 1] != a[n - 2] && a[n - 1] != a[n - 3])
    {
        cout << n;
        return;
    }
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] != a[i - 1] && a[i] != a[i + 1])
        {
            cout << i + 1;
            return;
        }
    }
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
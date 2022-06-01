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
    long long int n, x, k = -1;
    cin >> n >> x;
    int a[n];
    fl(i, n) cin >> a[i];
    for (int i = n - 1; i >= 0; --i)
    {
        if (a[i] < x)
        {
            k = i;
            break;
        }
    }
    cout << k + 1 << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
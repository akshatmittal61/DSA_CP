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
    vector<int> v;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    if (n % 2 != 0)
    {
        cout << -1;
        return;
    }
    int np = 0, nn = 0;
    fl(i, n)
    {
        if (v[i] == 1)
            ++np;
        else
            ++nn;
    }
    cout << abs(np - nn) / 2;
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
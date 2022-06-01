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
    vector<int> v;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    int we = 0, wo = 0;
    fl(i, n)
    {
        if (i % 2 == 0 && v[i] % 2 != 0)
            ++we;
        if (i % 2 != 0 && v[i] % 2 == 0)
            ++wo;
    }
    if (we == wo)
        cout << we;
    else
        cout << -1;
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
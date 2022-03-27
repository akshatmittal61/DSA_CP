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
    vector<int> v, d;
    fl(i, n)
    {
        int l;
        cin >> l;
        v.push_back(l);
    }
    sortall(v);
    fl(i, n - 1)
        d.push_back(abs(v[i] - v[i + 1]));
    sortall(d);
    cout << d[0];
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
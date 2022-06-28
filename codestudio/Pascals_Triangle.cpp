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
    vector<vector<long long int>> ans = {{1}};
    for (int i = 1; i < n; ++i)
    {
        vector<long long int> t = {1};
        for (int j = 1; j < i; ++j)
            t.pb(ans[i - 1][j] + ans[i - 1][j - 1]);
        t.pb(1);
        ans.pb(t);
    }
    for (auto i : ans)
    {
        for (auto j : i)
            cout << j << ' ';
        cout << endl;
    }
}

int main()
{
    _ fs
        ll test = 1;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
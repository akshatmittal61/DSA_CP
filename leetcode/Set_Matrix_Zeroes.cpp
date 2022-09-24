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

void setZeroes(vector<vector<int>> &matrix)
{
    set<int> zr, zc;
    int m = matrix.size(), n = matrix[0].size();
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 0)
            {
                zr.insert(i);
                zc.insert(j);
            }
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (zr.find(i) != zr.end() || zc.find(j) != zc.end())
                matrix[i][j] = 0;
        }
    }
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v;
    fl(i, m)
    {
        vector<int> r;
        fl(j, n)
        {
            int k;
            cin >> k;
            r.pb(k);
        }
        v.push_back(r);
    }
    setZeroes(v);
    for (auto i : v)
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
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
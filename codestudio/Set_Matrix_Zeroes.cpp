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
    vector<vector<int>> matrix;
    int m, n;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        vector<int> l;
        for (int j = 0; j < n; j++)
        {
            int k;
            cin >> k;
            l.push_back(k);
        }
        matrix.push_back(l);
    }
    vector<vector<int>> ans;
    for (int i = 0; i < m; i++)
    {
        vector<int> l;
        for (int j = 0; j < n; j++)
            l.push_back(-1);
        ans.push_back(l);
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (matrix[i][j] == 0)
            {
                for (int k = 0; k < n; ++k)
                    ans[i][k] = 0;
                for (int k = 0; k < m; ++k)
                    ans[k][j] = 0;
            }
            if (ans[i][j] != 0)
                ans[i][j] = matrix[i][j];
        }
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
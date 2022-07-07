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

vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
{
    vector<vector<int>> ans;
    int m = mat.size(), n = mat[0].size();
    vector<int> f;
    if (m * n != r * c)
        return mat;
    for (auto i : mat)
    {
        for (auto j : i)
            f.push_back(j);
    }
    int k = 0;
    for (int i = 0; i < r; ++i)
    {
        vector<int> R;
        for (int j = 0; j < c; ++j)
        {
            if (k < m * n)
                R.push_back(f[k++]);
            else
                break;
        }
        ans.push_back(R);
    }
    return ans;
}

void solve()
{
    int m, n, r, c;
    cin >> m >> n >> r >> c;
    vector<vector<int>> mat;
    fl(i, m)
    {
        vector<int> R;
        fl(j, n)
        {
            int k;
            cin >> k;
            R.push_back(k);
        }
        mat.push_back(R);
    }
    vector<vector<int>> ans = matrixReshape(mat, r, c);
    fl(i, r)
    {
        fl(j, c) cout << ans[i][j] << ' ';
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
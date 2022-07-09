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

void traverse(vector<vector<int>> &matrix)
{
    int m = matrix.size(), n = matrix[0].size();
    fl(i, m)
    {
        fl(j, n) cout << matrix[i][j] << ' ';
        cout << '\n';
    }
}

void rotateMatrix(vector<vector<int>> &mat, int m, int n)
{
    vector<vector<int>> ans = mat;
    int mx = m / 2, my = n / 2;
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i < mx && j >= i && j < n - i - 1)
                ans[i][j + 1] = mat[i][j];
            if (j >= my)
                ans[i + 1][j] = mat[i][j];
        }
    }
    traverse(ans);
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix;
    fl(i, m)
    {
        vector<int> r;
        fl(j, n)
        {
            int k;
            cin >> k;
            r.push_back(k);
        }
        matrix.push_back(r);
    }
    rotateMatrix(matrix, m, n);
    // traverse(matrix);
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
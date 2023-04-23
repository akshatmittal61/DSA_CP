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

vector<int> rowAndMaximumOnes(vector<vector<int>> &mat)
{
    int m = mat.size(), n = mat[0].size();
    int ansA = -1, ansB = -1;
    for (int i = 0; i < m; ++i)
    {
        int c = 0;
        for (int j = 0; j < n; ++j)
            c += (mat[i][j] == 1);
        if (c > ansB)
            ansA = i, ansB = c;
    }
    vector<int> ans(2);
    ans[0] = ansA;
    ans[1] = ansB;
    return ans;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> v;
    fl(i, m)
    {
        vector<int> r(n);
        fl(j, n) cin >> r[j];
        v.push_back(r);
    }
    vector<int> ans = rowAndMaximumOnes(v);
    for (auto x : ans)
        cout << x << ' ';
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
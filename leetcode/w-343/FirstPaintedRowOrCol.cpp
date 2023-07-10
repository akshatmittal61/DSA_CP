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

int firstCompleteIndex(vector<int> &arr, vector<vector<int>> &mat)
{
    map<int, pair<int, int>> mp;
    int m = mat.size(), n = mat[0].size();
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            mp[mat[i][j]] = {i, j};
    vector<int> visitiedX(m, 0);
    vector<int> visitiedY(n, 0);
    for (int i = 0; i < m * n; ++i)
    {
        int p = arr[i];
        visitiedX[mp[p].first]++;
        visitiedY[mp[p].second]++;
        if (visitiedX[mp[p].first] == n || visitiedY[mp[p].second] == m)
            return i;
    }
    return -1;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<int> arr(m * n);
    vector<vector<int>> mat;
    fl(i, m * n) cin >> arr[i];
    fl(i, m)
    {
        vector<int> r(n);
        fl(i, n)
                cin >>
            r[i];
        mat.push_back(r);
    }
    cout << firstCompleteIndex(arr, mat);
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
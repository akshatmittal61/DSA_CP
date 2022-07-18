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

int countNegatives(vector<vector<int>> &grid)
{
    int ans = 0;
    int m = grid.size();
    int n = grid[0].size();
    for (auto row : grid)
    {
        int k = 0;
        if (row[0] < 0)
            k = n;
        else if (row[n - 1] >= 0)
            k = 0;
        else
        {
            int beg = 0, end = n - 1;
            int mid = (beg + end) / 2;
            while (beg <= end)
            {
                mid = (beg + end) / 2;
                if (row[mid] >= 0)
                {
                    if (mid < n - 1 && row[mid + 1] < 0)
                    {
                        k = n - mid - 1;
                        break;
                    }
                    else
                        beg = mid + 1;
                }
                else
                    end = mid - 1;
            }
        }
        ans += k;
    }
    return ans;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid;
    fl(i, m)
    {
        vector<int> row;
        fl(i, n)
        {
            int k;
            cin >> k;
            row.pb(k);
        }
        grid.pb(row);
    }
    cout << countNegatives(grid);
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
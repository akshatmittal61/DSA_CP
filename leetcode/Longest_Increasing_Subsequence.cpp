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

int lengthOfLIS(vector<int> &nums)
{
    int n = nums.size();
    int dp[n][n];
    int ans = 1;
    for (int i = 0; i < n; ++i)
    {
        int k = nums[i];
        for (int j = 0; j < n; ++j)
        {
            if (j <= i)
                dp[i][j] = 1;
            else
            {
                if (nums[j] > k)
                {
                    k = nums[j];
                    dp[i][j] = dp[i][j - 1] + 1;
                }
                else
                    dp[i][j] = dp[i][j - 1];
            }
            // cout << dp[i][j] << ' ';
        }
        ans = max(ans, dp[i][n - 1]);
        // cout << endl;
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int k;
    fl(i, n)
    {
        cin >> k;
        v.push_back(k);
    }
    cout << lengthOfLIS(v);
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
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

int minOperations(vector<int> &nums)
{
    int n = nums.size(), ans = 0;
    if (n == 0 || n == 1)
        return 0;
    int maxx = nums[0];
    for (int i = 0; i < n - 1; ++i)
    {
        if (nums[i + 1] <= nums[i])
        {
            ans += nums[i] - nums[i + 1] + 1;
            nums[i + 1] = nums[i] + 1;
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    cout << minOperations(v);
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
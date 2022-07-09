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

int maxSubArray(vector<int> &nums)
{
    int n = nums.size();
    int curr = 0, Max = nums[0];
    for (auto i : nums)
    {
        curr = max(0, curr);
        curr += i;
        Max = max(Max, curr);
    }
    return Max;
}

void solve()
{
    vector<int> nums;
    int n;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        nums.pb(k);
    }
    cout << maxSubArray(nums);
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
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
    vector<int> nums;
    int n;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        nums.pb(k);
    }
    sortall(nums);
    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        // cout << nums[i] << ' ' << nums[i + 1] << endl;
        if (nums[i] == nums[i + 1])
        {
            int j = i, k = 1;
            while (j < n - 1 && nums[j] == nums[j + 1])
            {
                ++k;
                ++j;
            }
            ans += (k * (k - 1)) / 2;
            i = j;
            // cout << i << endl;
        }
    }
    cout << ans;
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
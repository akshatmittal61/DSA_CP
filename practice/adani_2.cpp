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

// there are a number of tiles on floor each numbered with different non-negtive numbers.
// you are standing on first tile
// each tile represents your maximum jumping distance, for e.g. if you are on tile 3 you can jump to 3 tiles ahead
// find out if you can reach the last tile or not

bool canReachLastTile(vector<int> nums)
{
    int n = nums.size();
    int maxReach = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > maxReach)
            return false;
        maxReach = max(maxReach, i + nums[i]);
    }
    return true;
}

void solve()
{
    vector<int> nums;
    int n;
    cin >> n;
    fl(i, n)
    {
        int x;
        cin >> x;
        nums.pb(x);
    }
    canReachLastTile(nums) ? cout << "yes" : cout << "no";
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
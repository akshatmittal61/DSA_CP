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

vector<int> getSubarrayBeauty(vector<int> &nums, int k, int x)
{
    int n = nums.size();
    vector<int> ans(n - k + 1);
    int beg = 0, end = k - 1;
    for (int i = 0; i < n - k + 1; i++)
    {
        vector<int> karr(k);
        for (int j = 0; j < k; ++j)
            karr[j] = nums[i + j];
        sort(karr.begin(), karr.end());
        ans[i] = min(0, karr[x - 1]);
    }
    return ans;
}

void solve()
{
    int n, k, x;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cin >> k >> x;
    vector<int> ans = getSubarrayBeauty(v, k, x);
    fl(i, n - k + 1) cout << ans[i] << ' ';
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
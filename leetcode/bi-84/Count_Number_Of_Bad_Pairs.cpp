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

long long countBadPairs(vector<int> &nums)
{
    int ans = 0, n = nums.size();
    vector<int> v(n);
    v[n - 1] = nums[n - 1];
    for (int i = n - 2; i >= 0; --i)
        v[i] = max(nums[i], v[i + 1]);
    set<int> s;
    for (int i = 0; i < n - 1; ++i)
    {
        if (v[i] == nums[i])
        {
            s.insert(i);
            ans += n - i - 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (s.find(i) != s.end())
            continue;
        for (int j = i; j < n; ++j)
            if (j - i != nums[j] - nums[i])
                ++ans;
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
    cout << countBadPairs(v);
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
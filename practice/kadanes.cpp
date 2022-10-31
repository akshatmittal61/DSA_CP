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

long long maxSubarraySum(vector<int> v)
{
    int n = v.size(), ans = INT_MIN;
    // brute force 1
    /* for (int i = 0; i < n; ++i)
    {
        for (int j = i; j < n; ++j)
        {
            int sum = 0;
            for (int k = i; k <= j; ++k)
                sum += v[k];
            ans = max(sum, ans);
        }
    } */

    // brute force 2
    /* for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += v[j];
            ans = max(ans, sum);
        }
    } */

    // kadane's algorithm
    int curr = 0;
    for (int i = 0; i < n; ++i)
    {
        curr += v[i];
        ans = max(ans, curr);
        curr = max(curr, 0);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cout << maxSubarraySum(v) << endl;
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
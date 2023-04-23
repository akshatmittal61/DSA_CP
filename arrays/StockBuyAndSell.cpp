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

int getProfit(vector<int> v, int start, int end)
{
    int n = v.size();
    if (end <= start)
        return 0;
    int ans = 0;
    for (int i = start; i < end; ++i)
    {
        for (int j = i + 1; j <= end; ++j)
        {
            if (v[j] > v[i])
            {
                int k = v[j] - v[i] + getProfit(v, start, i - 1) + getProfit(v, j + 1, end);
                ans = max(ans, k);
            }
        }
    }
    return ans;
}

int maxProfitNaive(vector<int> stocks)
{
    int n = stocks.size();
    return getProfit(stocks, 0, n - 1);
}

int maxProfileForOneBuy(vector<int> stocks)
{
    int n = stocks.size();
    int m = INT_MAX;
    int ans = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        m = min(m, stocks[i]);
        ans = max(ans, stocks[i] - m);
    }
    return ans;
}

int maxProfit(vector<int> stocks)
{
    int ans = 0;
    int n = stocks.size();
    for (int i = 1; i < n; ++i)
    {
        if (stocks[i - 1] < stocks[i])
            ans += stocks[i] - stocks[i - 1];
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cout << maxProfit(v);
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
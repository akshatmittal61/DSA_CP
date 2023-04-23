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

int getMax(vector<int> v, int start, int end)
{
    int n = v.size();
    int ans = v[start];
    for (int i = start; i <= end; ++i)
        ans = max(ans, v[i]);
    return ans;
}

int maxHeightNaive(vector<int> v)
{
    int n = v.size();
    vector<int> m(n);
    int ans = 0;
    for (int i = 0; i < n; ++i)
        ans += max(0, min(getMax(v, 0, i), getMax(v, i, n - 1)) - v[i]);
    return ans;
}

int maxHeight(vector<int> v)
{
    int n = v.size(), ans = 0;
    vector<int> lm(n), rm(n);
    lm[0] = v[0], rm[n - 1] = v[n - 1];
    for (int i = 1; i < n; ++i)
        lm[i] = max(lm[i - 1], v[i]);
    for (int i = n - 2; i >= 0; --i)
        rm[i] = max(rm[i + 1], v[i]);
    for (int i = 0; i < n; ++i)
        ans += max(0, min(lm[i], rm[i]) - v[i]);
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cout << maxHeight(v);
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
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

vector<int> bads;
bool isBadVersion(int i)
{
    return bads[i - 1];
}

int firstBadVersion(ll n)
{
    ll beg = 0, end = n - 1;
    ll mid = (beg + end) / 2;
    ll ans = mid + 1;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (isBadVersion(mid + 1))
        {
            ans = mid + 1;
            end = mid - 1;
        }
        else
            beg = mid + 1;
        if (beg > end)
            return ans;
    }
    return ans;
}

void solve()
{
    int n, k;
    cin >> n;
    fl(i, n)
    {
        int a;
        cin >> a;
        bads.pb(a);
    }
    cout << firstBadVersion(n);
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
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

int getPeak(vector<int> v)
{
    int n = v.size();
    if (n == 1)
        return 0;
    if (n == 2)
        return v[0] > v[1] ? 0 : 1;
    int beg = 0, end = n - 1;
    int mid = (beg + end) / 2;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if ((mid == 0 || v[mid] > v[mid - 1]) && (mid == n - 1 || v[mid] > v[mid + 1]))
            return mid;
        else if (v[mid] >= v[0])
            beg = mid + 1;
        else if (v[mid] < v[0])
            end = mid - 1;
    }
    return mid;
}

void solve()
{
    int n, k;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; ++i)
    {
        cin >> k;
        v.push_back(k);
    }
    int ans = getPeak(v);
    cout << ans << ": " << v[ans];
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
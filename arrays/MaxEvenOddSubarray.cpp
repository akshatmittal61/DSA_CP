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

int lenOfMaxEvenOddSubarray(vector<int> v)
{
    int ans = 0;
    int n = v.size();
    for (int i = 0; i < n; ++i)
    {
        int curr = 1;
        while (i < n - 1 && v[i] % 2 != v[i + 1] % 2)
            ++i, ++curr;
        ans = max(ans, curr);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cout << lenOfMaxEvenOddSubarray(v);
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
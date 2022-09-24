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

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    string s;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    cin >> s;
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == '0')
        {
            ans = min(ans, v[i]);
        }
    }
    cout << ans;
}

int main()
{
    _ fs
        ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
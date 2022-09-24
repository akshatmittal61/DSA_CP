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

string ans(vector<int> v)
{
    map<int, int> m;
    for (auto i : v)
        m[i]++;
    if (m.size() == 1)
        return "YES";
    int n = 1, p = v[0];
    for (auto i : m)
    {
        if (i.second > n)
        {
            p = i.first;
            n = i.second;
        }
    }
    for (auto i : m)
    {
        if (i.second == n && i.first != p)
            return "NO";
    }
    return "YES";
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
    cout << ans(v);
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
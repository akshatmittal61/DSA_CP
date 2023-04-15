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

bool includes(string s, char c)
{
    for (auto sc : s)
    {
        if (sc == c)
            return true;
    }
    return false;
}

int maximumCostSubstring(string s, string chars, vector<int> &vals)
{
    map<char, int> m;
    for (int i = 0; i < chars.length(); ++i)
        m[chars[i]] = vals[i];
    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (m.find(c) == m.end())
            m[c] = int(c - 'a') + 1;
    }
    vector<int> v;
    for (auto c : s)
        v.push_back(m[c]);
    int curr = 0;
    int n = v.size(), ans = INT_MIN;
    for (int i = 0; i < n; ++i)
    {
        curr += v[i];
        ans = max(ans, curr);
        curr = max(curr, 0);
    }
    return max(ans, 0);
}

void solve()
{
    string s, chars;
    cin >> s >> chars;
    int n = chars.length();
    vector<int> vals(n);
    fl(i, n) cin >> vals[i];
    cout << maximumCostSubstring(s, chars, vals);
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
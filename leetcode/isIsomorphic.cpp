#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

bool isIsomorphic(string s, string t)
{
    int n = s.length();
    map<char, char> p, q;
    for (int i = 0; i < n; ++i)
    {
        p[s[i]] = t[i];
        q[t[i]] = s[i];
    }
    string a = s, b = t;
    for (int i = 0; i < n; ++i)
    {
        a[i] = p[s[i]];
        b[i] = q[t[i]];
    }
    return a == t && b == s;
}

void solve()
{
    string s, t;
    cin >> s >> t;
    bool h = isIsomorphic(s, t);
    if (h)
        cout << "true";
    else
        cout << "false";
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
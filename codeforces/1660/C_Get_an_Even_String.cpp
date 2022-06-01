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

void solve()
{
    string s, a = "";
    cin >> s;
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == s[i + 1])
        {
            ++i;
            continue;
        }
        else
            a += s[i];
    }
    int li = -1;
    for (int i = 0; i < a.length(); i++)
    {
        for (int j = i + 1; j < a.length(); j++)
        {
            if (a[i] == a[j])
            {
                ans += j - i - 1;
                i = j;
                li = j;
                break;
            }
        }
    }
    int k = a.length() - li - 1;
    ans += max(k, 0);
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
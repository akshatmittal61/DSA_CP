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

int findTheLongestBalancedSubstring(string s)
{
    int n = s.length();
    int ans = 0;
    for (int i = 0; i < n - 1; ++i)
    {
        if (s[i] == '0' && s[i + 1] == '1')
        {
            int j = 1;
            int curr = 1;
            while (i - j >= 0 && s[i - j] == '0' && i + j < n - 1 && s[i + 1 + j] == '1')
            {
                ++j;
                ++curr;
            }
            ans = max(ans, curr);
        }
    }
    return 2 * ans;
}

void solve()
{
    string s;
    cin >> s;
    cout << findTheLongestBalancedSubstring(s);
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
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

int longestPalindrome(string s)
{
    map<char, int> m;
    int ans = 0;
    for (auto i : s)
        m[i]++;
    for (auto i : m)
    {
        if (i.second & 1)
        {
            ans += i.second - 1;
            m[i.first] = 1;
        }
        else
        {
            ans += i.second;
            m[i.first] = 0;
        }
    }
    for (auto i : m)
        if (i.second == 1)
        {
            ans++;
            return ans;
        }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    cout << longestPalindrome(s);
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
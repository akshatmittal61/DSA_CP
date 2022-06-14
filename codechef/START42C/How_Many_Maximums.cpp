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
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 2)
    {
        cout << 1;
        return;
    }
    int ans = 0;
    fl(i, n - 1)
    {
        if (s[i] == '0' && s[i + 1] == '1')
            ++ans;
    }
    if (s[0] == '1')
        ++ans;
    if (s[s.length() - 1] == '0')
        ++ans;
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
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
    string s;
    cin >> n;
    cin >> s;
    vector<char> f, b;
    for (int i = 0, j = n - 1; i <= j;)
    {
        if (i != j)
        {
            if (s[i] == s[j])
            {
                f.pb(s[i]);
                b.pb(s[i]);
                ++i, --j;
            }
            else
                ++i;
        }
        else
        {
            f.pb(s[i]);
            break;
        }
    }
    string ans;
    for (int i = 0; i < f.size(); ++i)
        ans += f[i];
    for (int i = b.size() - 1; i >= 0; --i)
        ans += b[i];
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
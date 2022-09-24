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
    string s;
    vector<char> v;
    cin >> s;
    int n = s.length();
    int i = 0;
    ll ans = 0;
    while (i < n)
    {
        if (v.size() <= 3)
        {
            bool f = false;
            for (auto j : v)
                if (s[i] == j)
                    f = true;
            if (!f)
            {
                v.push_back(s[i]);
                ++i;
            }
            cout << "a: " << s[i] << ' ' << v.size() << endl;
        }
        else if (v.size() == 3)
        {
            cout << "b: " << s[i] << endl;
            while (v[0] == s[i + 1] || v[1] == s[i + 1] || v[2] == s[i + 1])
                ++i;
        }
        else
        {
            cout << "c: " << s[i] << endl;
            ++ans;
            v.clear();
        }
    }
    cout << ans;
    /* set<char> v;
    for (auto i : s)
        v.insert(i);
    ll n = v.size();
    for (auto i : v)
        cout << i << ' ';
    if (n % 3 == 0)
        cout << (n / 3);
    else
        cout << (n / 3) + 1; */
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
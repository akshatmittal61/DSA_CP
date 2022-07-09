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
    ll n;
    string s;
    cin >> n >> s;
    ll n1 = 0, nl1 = 0;
    fl(i, n)
    {
        if (s[i] == '1')
        {
            ++n1;
            while (s[i] == '1')
                ++i;
        }
    }
    ll i = n - 1;
    while (s[i] == '1')
    {
        ++nl1;
        --i;
    }
    cout << max((ll)0, n1 - nl1);
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
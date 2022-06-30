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
    vector<ll> v;
    ll ne = 0, no = 0;
    fl(i, 2 * n)
    {
        ll k;
        cin >> k;
        v.pb(k);
        if (k & 1)
            ++no;
        else
            ++ne;
    }
    int t = abs(ne - no) / 2;
    if (ne == no)
        cout << 0;
    else if (no > ne)
        cout << t;
    else
    {
        ll k = 0;
        vector<ll> ve;
        for (auto i : v)
        {
            if (!(i & 1))
                ve.pb(i);
        }
        vector<ll> st;
        for (auto i : ve)
        {
            ll r = i, l = 0;
            while (!(r & 1))
            {
                r /= 2;
                ++l;
            }
            st.pb(l);
        }
        sortall(st);
        ll ans = 0;
        for (ll i = 0; i < t; ++i)
            ans += st[i];
        cout << ans;
    }
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
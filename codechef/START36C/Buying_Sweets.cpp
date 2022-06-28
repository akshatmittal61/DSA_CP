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
    ll n, r, ans = 0;
    cin >> n >> r;
    vector<pair<ll, ll>> a, b;
    fl(i, n)
    {
        ll k;
        cin >> k;
        a.push_back(make_pair(k, i));
    }
    fl(i, n)
    {
        ll k;
        cin >> k;
        b.push_back(make_pair(k, i));
    }
    sortall(a);
    ll i = 0;
    while (r && i < n)
    {
        if (r >= a[i].first)
        {
            r -= a[i].first;
            fl(j, n)
            {
                if (i == b[j].second)
                {
                    r += b[j].first;
                    break;
                }
            }
            ++ans;
            ++i;
        }
        else
        {
            if (r >= a[0].first)
                i = 0;
            else
                break;
        }
    }
    while (r > 0)
    {
        if (r < a[0].first)
            break;
        ll j = a[0].first;
        ll s = r - (r % j);
        ans += (s / j);
        r -= s;
    }
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
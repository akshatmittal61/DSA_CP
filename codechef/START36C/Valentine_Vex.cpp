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
    ll n;
    cin >> n;
    vector<ll> v, es, os;
    fl(i, n)
    {
        ll k;
        cin >> k;
        v.pb(k);
        if (k % 2 == 0)
            es.pb(k);
        else
            os.pb(k);
    }
    sortall(v);
    sortall(es);
    sortall(os);
    ll a = 0, b = 0, al = 0, bl = 0;
    a += v.back();
    al = v.back() % 2;
    v.pop_back();
    if (al == 0)
        es.pop_back();
    else
        os.pop_back();
    b += v.back();
    bl = v.back() % 2;
    v.pop_back();
    if (bl == 0)
        es.pop_back();
    else
        os.pop_back();
    n -= 2;
    ll i = 1, j = 1;
    while (n)
    {
        if (al == 0)
        {
            if (os.size() > 0)
            {
                a += os.back();
                al = os.back() % 2;
                os.pop_back();
                --n;
                ++i;
            }
        }
        else
        {
            if (es.size() > 0)
            {
                a += es.back();
                al = es.back() % 2;
                es.pop_back();
                --n;
                ++i;
            }
        }
        if (bl == 0)
        {
            if (os.size() > 0)
            {
                b += os.back();
                bl = os.back() % 2;
                os.pop_back();
                --n;
                ++j;
            }
        }
        else
        {
            if (es.size() > 0)
            {
                b += es.back();
                bl = es.back() % 2;
                es.pop_back();
                --n;
                ++j;
            }
        }
    }
    cout << a;
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
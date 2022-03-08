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

long long int f(long long int x, long long int a)
{
    if (x % a == 0)
        return f(x - 1, a);
    else
        return floor(x / a) + (x % a);
};

void solve()
{
    long long int l, r, a;
    cin >> l >> r >> a;
    double ans = f(l, a), s = 0;
    if (r - l <= a)
    {
        int k = floor(r / a) * a;
        if (k > l && k < r)
        {
            cout << f(k, a) << endl;
            return;
        }
        else
        {
            cout << f(r, a) << endl;
            return;
        }
    }
    int k = floor(r / a) * a;
    cout << f(k, a) << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
using namespace std;

void solve()
{
    ll n, r, b;
    cin >> n >> r >> b;
    while (n > 0)
    {
        ll k = ceil(r / float(b + 1));
        for (ll j = 0; j < k && r > 0; j++)
        {
            cout << 'R';
            --r;
            --n;
        }
        if (b > 0)
        {
            cout << 'B';
            --b;
            --n;
        }
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
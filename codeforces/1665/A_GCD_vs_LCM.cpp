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

int hcf(int a, int b)
{
    int hcf;
    for (int i = 1; i <= (a < b ? a : b); i++)
    {
        if ((a % i == 0) && (b % i == 0))
            hcf = i;
    }
    return hcf;
}

int lcm(int a, int b)
{
    return (a * b) / hcf(a, b);
}

void solve()
{
    ll n;
    cin >> n;
    if (n == 5)
    {
        cout << 2 << ' ' << 1 << ' ' << 1 << ' ' << 1;
        return;
    }
    if (n % 2 == 0)
    {
        if (n % 4 == 0)
        {
            ll k = n / 4;
            cout << k << ' ' << k << ' ' << k << ' ' << k;
        }
        else
        {
            ll k = n - 2;
            cout << (k / 2) - 1 << ' ' << (k / 2) + 1 << ' ';
            cout << 1 << ' ' << 1;
        }
    }
    else
    {
        ll k = n - 3;
        cout << 2 << ' ' << k - 2 << ' ';
        cout << 2 << ' ' << 1;
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
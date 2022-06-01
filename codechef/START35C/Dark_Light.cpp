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
    ll n, k;
    cin >> n >> k;
    if (k == 1)
    {
        if (n % 4 == 0)
            cout << "On";
        else
            cout << "Ambiguous";
    }
    else
    {
        if (n % 4 == 0)
            cout << "Off";
        else
            cout << "On";
    }
    if (n % 4 == 0)
    {
        if (k == 0)
            cout << "OFF";
        else
            cout << "ON";
    }
    else
    {
        if (k == 0)
            cout << "On";
        else
            cout << "Ambiguous";
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
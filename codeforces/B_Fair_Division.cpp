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
    ll n, t = 0, o = 0, s = 0, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 2)
            t++;
        else
            o++;
        s += x;
    }
    if (s % 2 == 1)
        cout << "NO";
    else
    {
        if (t % 2 == 1 && o >= 2)
            cout << "YES";
        else if (t % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
    }
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
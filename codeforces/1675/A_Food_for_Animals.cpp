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
    ll a, b, c, x, y;
    cin >> a >> b >> c >> x >> y;
    if (a >= x && b >= y)
    {
        cout << "YES";
    }
    else
    {
        if (a >= x)
        {
            if (b + c >= y)
                cout << "YES";
            else
                cout << "NO";
        }
        else if (b >= y)
        {
            if (a + c >= x)
                cout << "YES";
            else
                cout << "NO";
        }
        else
        {
            if (a + b + c >= x + y)
                cout << "YES";
            else
                cout << "NO";
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
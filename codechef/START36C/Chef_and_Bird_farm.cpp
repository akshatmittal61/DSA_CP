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
    int x, y, z;
    cin >> x >> y >> z;
    if (z % x == 0)
    {
        if (z % y == 0)
            cout << "ANY";
        else
            cout << "CHICKEN";
    }
    else if (z % y == 0)
    {
        if (z % x == 0)
            cout << "ANY";
        else
            cout << "DUCK";
    }
    else
        cout << "NONE";
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
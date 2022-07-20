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
    int a, b;
    cin >> a >> b;
    if (a % 2 == 0 && b % 2 == 0)
        cout << 0;
    else
    {
        if (a & 1 && b & 1)
            cout << a + b - 1;
        else if (a & 1)
            cout << b;
        else
            cout << a;
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
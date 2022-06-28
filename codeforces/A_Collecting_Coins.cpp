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
    int a, b, c, n;
    cin >> a >> b >> c >> n;
    int m = a;
    if (m > a)
        m = a;
    if (m < b)
        m = b;
    if (m < c)
        m = c;
    int k = (m - a) + (m - b) + (m - c);
    if (n - k < 0)
    {
        cout << "NO";
        return;
    }
    if ((n - k) % 3 == 0)
        cout << "YES";
    else
        cout << "NO";
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
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

bool check(int x1, int y1, int x2, int y2)
{
    int a = (x1 - x2) * (x1 - x2);
    int b = (y1 - y2) * (y1 - y2);
    float c = sqrt(a + b);
    if (c == int(c))
        return true;
    else
        return false;
}

void solve()
{
    int x, y;
    cin >> x >> y;
    if (x == 0 && y == 0)
    {
        cout << 0 << endl;
        return;
    }
    if (check(0, 0, x, y) || x == 0 || y == 0)
    {
        cout << 1 << endl;
        return;
    }
    cout << 2 << endl;
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
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
    int a, b, c;
    int x, y, z;
    cin >> a >> b >> c;
    x = max(a, max(b, c));
    y = min(a, min(b, c));
    if ((x == a && y == b) || (x == b && y == a))
        z = c;
    else if ((x == a && y == c) || (x == c && y == a))
        z = b;
    else
        z = a;
    cout << abs(x - z) + abs(y - z);
}

int main()
{
    _ fs
    solve();
    return 0;
}
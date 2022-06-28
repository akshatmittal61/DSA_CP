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
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    int a, b, c;
    fl(i, n)
    {
        cin >> a >> b >> c;
        x += a;
        y += b;
        z += c;
    }
    if (x != 0 || y != 0 || z != 0)
        cout << "NO";
    else
        cout << "YES";
}

int main()
{
    _ fs
    solve();
    return 0;
}
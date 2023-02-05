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

int cutSegements(int n, int x, int y, int z)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;
    int ans = max(max(cutSegements(n - x, x, y, z), cutSegements(n - y, x, y, z)), cutSegements(n - z, x, y, z));
    return ans == -1 ? -1 : ans + 1;
}

void solve()
{
    int n, x, y, z;
    cin >> n >> x >> y >> z;
    cout << cutSegements(n, x, y, z);
}

int main()
{
    _ fs
        ll test = 1;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
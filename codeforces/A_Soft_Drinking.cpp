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
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int v1 = (k * l) / nl;
    int v2 = c * d;
    int v3 = p / np;
    int a1 = min(v1, min(v2, v3));
    int a2 = a1 / n;
    cout << a2;
}

int main()
{
    _ fs
    solve();
    return 0;
}
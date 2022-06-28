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
    int k = 0;
    while (n > 0)
    {
        n -= ((k + 1) * (k + 2)) / 2;
        ++k;
    }
    if (n == 0)
        cout << k;
    else
        cout << k - 1;
}

int main()
{
    _ fs
        ll test = 1;
    solve();
    return 0;
}
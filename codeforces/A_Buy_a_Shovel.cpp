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
    int k, r, t;
    cin >> k >> r;
    for (int i = 1; i < 10; i++)
    {
        if (((i * k) % 10 == 0) || ((i * k - r) % 10 == 0))
        {
            t = i;
            break;
        }
    }
    cout << t;
}

int main()
{
    _ fs
    solve();
    return 0;
}
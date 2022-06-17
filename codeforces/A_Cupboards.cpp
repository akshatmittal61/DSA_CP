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
    int l0 = 0, l1 = 0, r0 = 0, r1 = 0;
    fl(i, n)
    {
        int a, b;
        cin >> a >> b;
        if (a == 0)
            ++l0;
        else
            ++l1;
        if (b == 0)
            ++r0;
        else
            ++r1;
    }
    cout << min(l0, l1) + min(r0, r1);
}

int main()
{
    _ fs
    solve();
    return 0;
}
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
    ll n;
    cin >> n;
    ll k = 0;
    if (n % 2 == 0)
    {
        k = n / 2;
        cout << k << endl;
        for (int i = 1; i <= k; i++)
            cout << 2 << ' ';
    }
    else
    {
        k = (n - 1) / 2;
        cout << k << endl;
        for (int i = 1; i < k; i++)
            cout << 2 << ' ';
        cout << 3;
    }
}

int main()
{
    _ fs
    solve();
    return 0;
}
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

void solve()
{
    int n;
    cin >> n;
    int v[n];
    fl(i, n) cin >> v[i];
    for (int i = 0; i < n - 2; i++)
    {
        if (v[i] % 2 != v[i + 2] % 2)
        {
            cout << "NO";
            return;
        }
    }
    cout << "YES";
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
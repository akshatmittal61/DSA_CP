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
    int n, m;
    cin >> n >> m;
    char c;
    fl(i, m * n)
    {
        cin >> c;
        if (c != 'B' && c != 'G' && c != 'W')
        {
            cout << "#Color";
            return;
        }
    }
    cout << "#Black&White";
}

int main()
{
    _ fs
        ll test = 1;
    solve();
    return 0;
}
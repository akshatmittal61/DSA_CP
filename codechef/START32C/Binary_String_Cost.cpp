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
    int n, x, y;
    cin >> n >> x >> y;
    string s;
    cin >> s;
    int na = 0, nb = 0;
    fl(i, n)
    {
        if (s[i] == '0')
            ++na;
        else
            ++nb;
    }
    if (na == 0 || nb == 0)
        cout << 0;
    else
        cout << min(x, y);
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
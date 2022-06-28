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
    vector<vector<char>> m;
    for (int i = 0; i < 8; ++i)
    {
        vector<char> n;
        for (int j = 0; j < 8; ++j)
        {
            char c;
            cin >> c;
            n.push_back(c);
        }
        m.push_back(n);
    }
    for (int i = 1; i < 7; ++i)
    {
        for (int j = 1; j < 7; ++j)
        {
            if (m[i][j] == '#')
            {
                if (m[i - 1][j - 1] == '#' && m[i + 1][j - 1] == '#' && m[i - 1][j + 1] == '#' && m[i + 1][j + 1] == '#')
                {
                    cout << i + 1 << ' ' << j + 1;
                    return;
                }
            }
        }
    }
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
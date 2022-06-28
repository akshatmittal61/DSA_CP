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
    int l = 0;
    vector<pair<int, int>> v;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.push_back(make_pair(i + 1, k));
    }
    for (auto i : v)
    {
        if (i.second > m)
        {
            v.push_back(make_pair(i.first, i.second - m));
            ++l;
        }
    }
    cout << v[n + l - 1].first;
}

int main()
{
    _ fs
    solve();
    return 0;
}
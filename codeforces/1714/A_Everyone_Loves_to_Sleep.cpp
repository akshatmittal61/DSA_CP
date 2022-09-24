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
    int n, h, m;
    int ansa = 0, ansb = 0;
    cin >> n >> h >> m;
    vector<pair<int, int>> v;
    fl(i, n)
    {
        int a, b;
        cin >> a >> b;
        v.push_back(make_pair(a, b));
    }
    fl(i, n)
    {
        if (h == v[i].first && m == v[i].second)
        {
            cout << 0 << ' ' << 0;
            return;
        }
    }
    fl(i, n)
    {
        if (h == v[i].first)
        {
            if (m <= v[i].second)
            {
                cout << 0 << ' ' << v[i].second - m;
                return;
            }
        }
    }
    fl(i, n - 1) if (h > v[i].first)
        v[i]
            .first += 24;
    fl(i, n - 1)
    {
        if (v[i].first >= v[i + 1].first)
        {
            for (int j = i + 1; j < n; ++j)
            {
                v[j].first += 24;
                i = n - 1;
            }
        }
    }
    fl(i, n) cout << v[i].first << ':' << v[i].second << ' ';
    fl(i, n)
    {
        if (h < v[i].first)
        {
            if (m <= v[i].second)
            {
                ansa = v[i].first - h;
                ansb = v[i].second - m;
                cout << ansa << ' ' << ansb;
                return;
            }
            else
            {
                ansa = v[i].first - h - 1;
                ansb = 60 - (m - v[i].second);
                cout << ansa << ' ' << ansb;
                return;
            }
        }
    }
    cout << ansa << ' ' << ansb;
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
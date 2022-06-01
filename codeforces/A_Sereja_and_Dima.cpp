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
    vector<int> v;
    ll s = 0, d = 0;
    fl(i, n)
    {
        int l;
        cin >> l;
        v.push_back(l);
    }
    int beg = 0, end = n - 1, l = 0, i = 0;
    while (beg <= end)
    {
        l = max(v[beg], v[end]);
        if (l == v[beg])
            ++beg;
        else
            --end;
        if (i % 2 == 0)
            s += l;
        else
            d += l;
        ++i;
    }
    cout << s << ' ' << d;
}

int main()
{
    _ fs
    solve();
    return 0;
}
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

int Max(vector<int> v, int n)
{
    int max = v[0];
    fl(i, n) if (v[i] > max)
        max = v[i];
    return max;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v;
    fl(i, n)
    {
        int l;
        cin >> l;
        v.push_back(l);
    }
    int multi = Max(v, n);
    int single = 0;
    fl(i, n)
    {
        single += v[i] / x;
        if (v[i] % x != 0)
            ++single;
    }
    cout << min(multi, single);
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
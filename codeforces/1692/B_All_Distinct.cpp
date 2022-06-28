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
    vector<int> v, a;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    vector<int>::iterator it = v.begin();
    sortall(v);
    for (int i = 0; i < v.size() - 3; ++i)
    {
        if (v[i] == v[i + 1] && v[i] == v[i + 2])
        {
            v.erase(it + i);
            v.erase(it + i + 1);
        }
    }
    cout << v.size();
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
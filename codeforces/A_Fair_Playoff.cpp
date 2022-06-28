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
    vector<int> v;
    fl(i, 4)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    int a = max(v[0], v[1]), b = max(v[2], v[3]);
    sortall(v);
    if (a == v[2] && b == v[3])
        cout << "YES";
    else if (a == v[3] && b == v[2])
        cout << "YES";
    else
        cout << "NO";
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
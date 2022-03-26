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
    int n, k;
    bool t = true;
    cin >> n;
    vector<int> a, b;
    fl(i, n)
    {
        cin >> k;
        a.push_back(k);
    }
    sortall(a);
    fl(i, n - 1) b.push_back(abs(a[i + 1] - a[i]));
    fl(i, n - 1)
    {
        if (b[i] != 1 && b[i] != 0)
        {
            t = false;
            break;
        }
    }
    if (t)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
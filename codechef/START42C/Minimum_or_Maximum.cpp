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
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    int Min = v[0], Max = v[0];
    fl(i, n - 1)
    {
        if (v[i] < Min)
            Min = v[i];
        if (v[i] > Max)
            Max = v[i];
        if (v[i] > v[i + 1])
        {
            if (v[i + 1] > Min && v[i + 1] < Max)
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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
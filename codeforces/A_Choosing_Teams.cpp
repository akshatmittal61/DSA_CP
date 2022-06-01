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
    cin >> n >> k;
    vector<int> y;
    fl(i, n)
    {
        int l;
        cin >> l;
        y.push_back(l);
    }
    int limit = 5 - k;
    int noOfTeams = 0, t = 0;
    fl(i, n)
    {
        if (y[i] <= limit)
            ++t;
        if (t == 3)
        {
            ++noOfTeams;
            t = 0;
        }
    }
    cout << noOfTeams;
}

int main()
{
    _ fs
    solve();
    return 0;
}
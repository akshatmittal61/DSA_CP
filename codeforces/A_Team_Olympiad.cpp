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
    vector<pair<int, int>> t;
    int n1 = 0, n2 = 0, n3 = 0, p1 = 0, p2 = 0, p3 = 0;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        t.push_back(make_pair(k, i + 1));
        if (k == 1)
            ++n1;
        else if (k == 2)
            ++n2;
        else
            ++n3;
    }
    sortall(t);
    fl(i, n - 1)
    {
        if (t[i].first == 1 && t[i + 1].first == 2)
            p2 = i + 1;
        if (t[i].first == 2 && t[i + 1].first == 3)
            p3 = i + 1;
    }
    int noOfTeams = min(n1, min(n2, n3));
    cout << noOfTeams << endl;
    fl(i, noOfTeams)
    {
        cout << t[i].second << ' ';
        cout << t[p2 + i].second << ' ';
        cout << t[p3 + i].second << endl;
    }
}

int main()
{
    _ fs
    solve();
    return 0;
}
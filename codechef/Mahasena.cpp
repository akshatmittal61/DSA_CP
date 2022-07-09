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
    int e = 0, o = 0;
    fl(i, n)
    {
        int k;
        cin >> k;
        if (k & 1)
            ++o;
        else
            ++e;
    }
    if (e > o)
        cout << "READY FOR BATTLE";
    else
        cout << "NOT READY";
}

int main()
{
    _ fs
        ll test = 1;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
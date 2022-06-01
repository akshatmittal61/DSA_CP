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
    int a[n];
    int ne = 0, no = 0;
    fl(i, n)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            ++ne;
        else
            ++no;
    }
    if (ne == 0 || no == 0)
    {
        cout << 0;
        return;
    }
    if (ne == no)
    {
        if (no % 2 == 0)
            cout << no / 2;
        else
            cout << n / 2;
    }
    else if (ne > no)
    {
        if (no % 2 == 0)
            cout << no / 2;
        else
            cout << ne;
    }
    else if (no > ne)
        cout << ne;
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
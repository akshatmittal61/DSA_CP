#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.begin(), v.end(), greater<ll>())
using namespace std;

int noOfSwaps(vector<int> v)
{
    int a = -1, b = -1;
    int n = v.size();
    if (v[0] == 1 && v[n - 1] == n)
        return 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 1)
            a = i;
        if (v[i] == n)
            b = i;
    }
    if (a > b)
        return a + n - b - 2;
    else
        return a + n - b - 1;
}

void solve()
{
    int n;
    vector<int> v;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    cout << noOfSwaps(v);
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
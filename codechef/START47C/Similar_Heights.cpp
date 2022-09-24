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

int noOfStudents(vector<int> v)
{
    int uniques = 0;
    map<int, int> m;
    for (auto i : v)
        m[i]++;
    for (auto i : m)
        if (i.second == 1)
            ++uniques;
    if (uniques > 2)
    {
        if (uniques & 1)
            return (uniques + 1) / 2;
        else
            return (uniques + 2) / 2;
    }
    else
        return uniques;
}

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
    cout << noOfStudents(v);
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
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

bool includes(vector<int> v, int k)
{
    int n = v.size();
    fl(i, n)
    {
        if (v[i] == k)
            return true;
    }
    return false;
}

vector<vector<int>> findMatrix(vector<int> &nums)
{
    map<int, int> m;
    for (auto x : nums)
        m[x]++;
    int noOfRows = 0;
    for (auto x : m)
        noOfRows = max(noOfRows, x.second);
    vector<vector<int>> ans;
    fl(i, noOfRows)
    {
        vector<int> r;
        for (auto x : m)
        {
            if (x.second > 0)
            {
                r.push_back(x.first);
                m[x.first]--;
            }
        }
        ans.push_back(r);
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    vector<vector<int>> ans = findMatrix(v);
    for (auto r : ans)
    {
        for (auto x : r)
            cout << x << ' ';
        cout << endl;
    }
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
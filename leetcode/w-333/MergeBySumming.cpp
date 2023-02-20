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

vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
{
    map<int, int> m1, m2, m;
    for (auto x : nums1)
        m1[x[0]] = x[1];
    for (auto x : nums2)
        m2[x[0]] = x[1];
    for (auto p : m1)
        m[p.first] = p.second;
    for (auto p : m2)
        m[p.first] = p.second + m[p.first];
    vector<vector<int>> ans;
    for (auto p : m)
        ans.push_back({p.first, p.second});
    return ans;
}

void solve()
{
    vector<vector<int>> v1, v2;
    int n1, n2;
    cin >> n1 >> n2;
    fl(i, n1)
    {
        int a, b;
        cin >> a >> b;
        v1.push_back({a, b});
    }
    fl(i, n2)
    {
        int a, b;
        cin >> a >> b;
        v2.push_back({a, b});
    }
    vector<vector<int>> ans = mergeArrays(v1, v2);
    for (auto x : ans)
        cout << x[0] << ' ' << x[1] << endl;
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
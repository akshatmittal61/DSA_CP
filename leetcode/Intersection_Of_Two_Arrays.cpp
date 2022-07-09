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

vector<int> intersect(vector<int> &nums1, vector<int> &nums2)
{
    map<int, int> M;
    int m = nums1.size(), n = nums2.size();
    vector<int> a, b;
    if (m >= n)
        a = nums1, b = nums2;
    else
        a = nums2, b = nums1;
    m = a.size(), n = b.size();
    for (auto i : a)
        ++M[i];
    vector<int> ans;
    for (auto i : b)
    {
        if (M[i] > 0)
        {
            ans.push_back(i);
            --M[i];
        }
    }
    return ans;
}

void solve()
{
    int m, n;
    vector<int> a, b;
    cin >> m;
    fl(i, m)
    {
        int k;
        cin >> k;
        a.pb(k);
    }
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        b.pb(k);
    }
    vector<int> ans = intersect(a, b);
    for (auto i : ans)
        cout << i << ' ';
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
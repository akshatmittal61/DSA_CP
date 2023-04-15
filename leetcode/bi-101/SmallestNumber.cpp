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

int minNumber(vector<int> &nums1, vector<int> &nums2)
{
    int a1[10] = {0}, a2[10] = {0};
    for (auto x : nums1)
        a1[x]++;
    for (auto x : nums2)
        a2[x]++;
    for (int i = 0; i <= 9; ++i)
    {
        if (a1[i] > 0 && a2[i] > 0)
            return i;
    }
    int s1 = -1, s2 = -1;
    for (int i = 0; i <= 9; ++i)
    {
        if (a1[i] > 0)
        {
            s1 = i;
            break;
        }
    }
    for (int i = 0; i <= 9; ++i)
    {
        if (a2[i] > 0)
        {
            s2 = i;
            break;
        }
    }
    if (s1 > s2)
        return (s2 * 10) + s1;
    else
        return (s1 * 10) + s2;
}

void solve()
{
    int m, n;
    cin >> m;
    vector<int> v1(m);
    fl(i, m)
            cin >>
        v1[i];
    cin >> n;
    vector<int> v2(n);
    fl(i, n)
            cin >>
        v2[i];
    cout << minNumber(v1, v2);
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
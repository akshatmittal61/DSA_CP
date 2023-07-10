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

/* int majorityElement(vector<int> v)
{
    int n = v.size();
    int k = n & 1 ? (n + 1) / 2 : (n / 2) + 1;
    unordered_map<int, int> m;
    for (auto x : v)
    {
        m[x]++;
        if (m[x] >= k)
            return x;
    }
    return -1;
} */

int majorityElement(vector<int> v)
{
    int ans = v[0];
    int c = 0, n = v.size(), k = n / 2;
    for (int i = 0; i < n; ++i)
    {
        if (ans == v[i])
            ++c;
        else
            --c;
        if (c == 0)
            ans = v[i], ++c;
    }
    c = 0;
    for (int i = 0; i < n; ++i)
    {
        if (ans == v[i])
            ++c;
    }
    if (c > k)
        return ans;
    else
        return -1;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cout << majorityElement(v);
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

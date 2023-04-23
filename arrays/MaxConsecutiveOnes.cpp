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

int maxConsecutiveOnes(vector<int> v)
{
    int ans = 0, n = v.size(), curr = 0;
    for (int i = 0; i < n; ++i)
    {
        if (v[i] == 0)
            curr = 0;
        else
        {
            ++curr;
            ans = max(ans, curr);
        }
    }
    return ans;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    cout << maxConsecutiveOnes(v);
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
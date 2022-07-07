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

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size(), i = 0, k = 0;
    while (i < n)
    {
        nums[k++] = nums[i];
        while (i < n - 1 && nums[i] == nums[i + 1])
            ++i;
        ++i;
    }
    return k;   
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
    int k = removeDuplicates(v);
    fl(i, k) cout << v[i] << ' ';
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
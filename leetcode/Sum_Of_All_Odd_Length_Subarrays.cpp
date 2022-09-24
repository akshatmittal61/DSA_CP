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

int sumOddLengthSubarrays(vector<int> &arr)
{
    int ans = 0, n = arr.size();
    for (int k = 1; k <= n; k += 2)
    {
        int s = 0;
        for (int i = 0; i < k; ++i)
            s += arr[i];
        for (int i = 0; i <= n - k; ++i)
        {
            ans += s;
            if (i < n)
                s -= arr[i];
            if (i + k < n)
                s += arr[i + k];
        }
    }
    return ans;
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
        v.push_back(k);
    }
    cout << sumOddLengthSubarrays(v);
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
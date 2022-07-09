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

int maxArr(vector<int> &A)
{
    int n = A.size();
    int i = 0, j = n - 1;
    int m = INT_MIN;
    for (i = 0; i < n; ++i)
    {
        j = n - 1;
        while (j > i)
        {
            int a = abs(A[i] - A[j]);
            int b = abs(i - j);
            m = max(m, a + b);
            --j;
        }
    }
    return m;
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
    cout << maxArr(v);
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
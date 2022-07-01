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

vector<int> plusOne(vector<int> &A)
{
    int n = A.size();
    vector<int> ans;
    int k = 0;
    while (k < n && A[k++] == 0)
        ;
    for (int i = k - 1; i < n; ++i)
        ans.push_back(A[i]);
    n = ans.size();
    for (int i = n - 1; i >= 0; --i)
    {
        if (i == 0 && ans[i] == 9)
        {
            vector<int> t = {1};
            ans[0] = 0;
            for (auto j : ans)
                t.push_back(j);
            return t;
        }
        if (ans[i] < 9)
        {
            ++ans[i];
            return ans;
        }
        else
            ans[i] = 0;
    }
    return ans;
}

void solve()
{
    vector<int> A;
    int n;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        A.pb(k);
    }
    vector<int> ans = plusOne(A);
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
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

vector<int> nextPermutation(vector<int> &permutation, int n)
{
    vector<int> v = permutation;
    int k = -1;
    for (int i = n - 1; i > 0; --i)
    {
        if (v[i] > v[i - 1])
        {
            k = i - 1;
            break;
        }
    }
    if (k == -1)
    {
        sortall(v);
        return v;
    }
    vector<int>::iterator it = v.begin();
    sort(it + k + 1, v.end());
    for (int i = k; i < n; ++i)
    {
        if (v[i] > v[k])
        {
            swap(v[i], v[k]);
            break;
        }
    }
    return v;
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
    vector<int> ans = nextPermutation(v, n);
    for (auto i : ans)
        cout << i << ' ';
}

int main()
{
    _ fs
        ll test = 1;
    cin >> test;
    while (test--)
    {
        solve();
        cout << endl;
    }
    return 0;
}
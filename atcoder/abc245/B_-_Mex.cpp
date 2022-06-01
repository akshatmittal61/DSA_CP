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

bool find(vector<int> v, int n, int s)
{
    int beg = 0, end = n, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (v[mid] == s)
            return true;
        else if (v[mid] > s)
            end = mid - 1;
        else
            beg = mid + 1;
    }
    return false;
}

void solve()
{
    int n;
    vector<int> v;
    cin >> n;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    sortall(v);
    for (int i = 0; i <= 2000; i++)
    {
        if (find(v, n, i))
            continue;
        else
        {
            cout << i;
            return;
        }
    }
}

int main()
{
    _ fs
    solve();
    return 0;
}
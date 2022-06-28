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

void solve()
{
    int n, s;
    cin >> n >> s;
    int S = 0;
    vector<int> v;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
        S += k;
    }
    int ans = 0;
    while (S > s)
    {
        S -= 1;
        vector<int>::iterator it;
        if (v.front() == 1)
            it = v.begin();
        else if (v.back() == 1)
            it = v.end() - 1;
        else
        {
            // int i = 0, j = v.size();
            int a = 0, b = 0;
            for (int i = 0; i < v.size() && v[i] == 0; ++i)
                ++a;
            for (int j = v.size() - 1; j >= 0 && v[j] == 0; --j)
                ++b;
            if (a > b)
                it = v.end();
            else
                it = v.begin();
            S += 1;
        }
        v.erase(it);
        ++ans;
    }
    cout << ans;
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
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

int fib(int n, vector<int> &v)
{
    if (n == 0)
        return 0;
    else if (n == 1)
    {
        v[1] = 1;
        return 1;
    }
    else
    {
        if (v[n] == 0)
            v[n] = fib(n - 1, v) + fib(n - 2, v);
        return v[n];
    }
}

vector<int> fib(int n)
{
    vector<int> v(n);
    fib(n - 1, v);
    return v;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v = fib(n);
    for (auto i : v)
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
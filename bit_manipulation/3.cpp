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

bool isPowerOfTwo(int n)
{
    return (n && !(n & (n - 1)));
}

void solve()
{
    // check if number is power of 2
    int n;
    cin >> n;
    if (isPowerOfTwo(n))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
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

bool checkKthBit(int n, int k)
{
    return (n >> (k - 1)) & 1;
}

void solve()
{
    // check if kth bit is set or not
    int n, k;
    cin >> n >> k;
    if (checkKthBit(n, k))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
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
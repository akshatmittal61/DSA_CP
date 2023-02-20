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

int noByLastSetBit(int n)
{
    return ((n ^ (n - 1)) + 1) >> 1;
}

int lastClusterOfSetBitSize(int n)
{
    int ans = 0;
    while (n != 0)
    {
        if (n & 1)
        {
            while (n & 1)
            {
                ++ans;
                n = n >> 1;
            }
            return ans;
        }
        else
            n = n >> 1;
    }
    return ans;
}

int minOperations(int n)
{
    int ans = 0;
    if (isPowerOfTwo(n))
        return 1;
    while (!isPowerOfTwo(n))
    {
        if (lastClusterOfSetBitSize(n) == 1)
            n -= noByLastSetBit(n);
        else
            n += noByLastSetBit(n);
        ++ans;
    }
    return ans + (ans != 0);
}

void solve()
{
    int n;
    cin >> n;
    cout << minOperations(n);
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
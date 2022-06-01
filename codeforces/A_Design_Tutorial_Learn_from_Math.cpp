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

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve()
{
    int n, x;
    cin >> n;
    if (n % 2 != 0)
        x = (n - 1) / 2;
    else
        x = n / 2;
    while (isPrime(x) || isPrime(n - x))
        --x;
    cout << x << ' ' << n - x;
}

int main()
{
    _ fs
    solve();
    return 0;
}
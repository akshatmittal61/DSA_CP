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

string removeTrailingZeros(string num)
{
    int n = num.length();
    int nz = 0;
    for (int i = n - 1; i >= 0; --i)
    {
        if (num[i] == '0')
            ++nz;
        else
            break;
    }
    return num.substr(0, n - nz);
}

void solve()
{
    string s;
    cin >> s;
    cout << removeTrailingZeros(s);
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
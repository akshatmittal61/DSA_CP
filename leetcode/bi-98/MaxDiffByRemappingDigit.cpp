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

int reverseNumber(int num)
{
    int ans = 0;
    while (num != 0)
    {
        int m = num % 10;
        ans = (ans * 10) + m;
        num /= 10;
    }
    return ans;
}

int getFirstDigit(int num)
{
    while (num / 10 != 0)
        num /= 10;
    return num;
}

int minMaxDifference(int num)
{
    int sizeOfNum = 0;
    int n = num, k = num, rev = reverseNumber(num), firstDigit = getFirstDigit(num);
    while (k != 0)
        k /= 10, ++sizeOfNum;
    k = 0;
    while (rev != 0)
    {
        int m = rev % 10;
        rev /= 10;
        if (m == 9)
            continue;
        else
        {
            k = m;
            break;
        }
    }
    int Max = 0, Min = 0;
    vector<int> vmax, vmin;
    while (n != 0)
    {
        int m = n % 10;
        if (m == k)
            vmax.push_back(9);
        else
            vmax.push_back(m);
        if (m == firstDigit)
            vmin.push_back(0);
        else
            vmin.push_back(m);
        n /= 10;
    }
    for (int i = sizeOfNum - 1; i >= 0; --i)
    {
        Max = (Max * 10) + vmax[i];
        Min = (Min * 10) + vmin[i];
    }
    return Max - Min;
}

void solve()
{
    int n;
    cin >> n;
    cout << minMaxDifference(n);
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
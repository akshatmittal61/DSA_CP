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
    string s;
    cin >> s;
    int x = 0;
    int n = s.length(), j = 0, y;
    /* do
    {
        y = s.find(s.substr(0, j), 1);
        if (y != string::npos)
        {
            x = j;
        }
        ++j;
        if (j >= n / 2 || y == string::npos)
        {
            if (x != 0)
                j = 0;
            s.erase(0, x);
            x = 0;
        }
    } while (j <= n / 2); */
    /* int del;
    int i = 0, y = 0, k = 1;
    do
    {
        if (y != string::npos)
            i = y;
        y = s.find(s.substr(i, i + k), i);
        ++k;
        ++j;
        if (y == string::npos)
        {
            k = 0;
        }
    } while (j <= n / 2); */
    // s.erase(0, i);
    int a[26] = {0};
    for (int i = 0; i < s.length(); ++i)
    {
        a[s[i] - 'a']++;
    }
    int i = 0;
    while (i < s.length())
    {
        if (a[s[i] - 'a'] > 1)
        {
            a[s[i] - 'a']--;
            ++i;
        }
        else
            break;
    }
    for (int k = i; k < s.length(); ++k)
    {
        cout << s[k];
    }
    cout << endl;
}

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
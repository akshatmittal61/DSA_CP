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

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << "NO";
        return;
    }
    else if (n == 2)
    {
        if (s[0] == 'W' || s[1] == 'W')
        {
            cout << "NO";
            return;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == 'W' && s[i + 1] != 'W' && s[i + 2] == 'W')
        {
            cout << "NO";
            return;
        }
    }
    char c;
    string e = s.substr(0, 1);
    int k = 0;
    for (int i = 0; i <= n; i++)
    {
        c = s[i];
        if (e[k] != c)
        {
            e.push_back(c);
            ++k;
        }
    }
    if (k == 1)
    {
        if (e[0] != 'W')
        {
            cout << "NO";
            return;
        }
        else
        {
            cout << "YES";
            return;
        }
    }
    else if (k == 2)
    {
        if (e[0] == 'W' || e[1] == 'W')
        {
            cout << "NO";
            return;
        }
        else
        {
            cout << "YES";
            return;
        }
    }
    else if (k == 3)
    {
        if (e[0] == 'W' && e[2] == 'W')
        {
            cout << "NO";
            return;
        }
        else
        {
            cout << "YES";
            return;
        }
    }
    if (s[1] == 'W' || s[k - 2] == 'W')
    {
        cout << "NO";
        return;
    }
    for (int i = 1; i < k - 2; i++)
    {
        if (s[i] == 'R')
        {
            if ((s[i + 1] != 'B') || (s[i - 1] != 'B'))
            {
                cout << "NO";
                return;
            }
        }
        else if (s[i] == 'B')
        {
            if ((s[i + 1] != 'R') || (s[i - 1] != 'R'))
            {
                cout << "NO";
                return;
            }
        }
    }
    cout << "YES";
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
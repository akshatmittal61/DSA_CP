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

bool check(string s, char c)
{
    int i, n = s.length();
    fl(i, n)
    {
        if (s[i] == c && i % 2 == 0)
            return true;
    }
    return false;
}

void solve()
{
    string s;
    char c;
    cin >> s >> c;
    if (check(s, c))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
}

//===========MAIN BEGIN===========

int main()
{
    _ fs
        ll test;
    cin >> test;
    while (test--)
        solve();
    return 0;
}
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

bool includes(string s, char c)
{
    for (char i : s)
        if (i == c)
            return true;
    return false;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    int x[26] = {0}, y[26] = {0};
    for (char i : a)
        ++x[i - 97];
    for (char i : b)
        ++x[i - 97];
    int n;
    cin >> n;
    fl(i, n)
    {
        string s;
        cin >> s;
        for (char i : s)
            ++y[i - 97];
    }

    for (int i = 0; i < 26; ++i)
    {
        if (x[i] < y[i])
        {
            cout << "NO";
            return;
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
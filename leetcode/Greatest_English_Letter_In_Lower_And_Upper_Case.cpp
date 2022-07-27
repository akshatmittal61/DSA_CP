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

string greatestLetter(string s)
{
    map<char, int> l, u;
    for (auto i : s)
    {
        if (i >= 'A' && i <= 'Z')
            u[i]++;
        else if (i >= 'a' && i <= 'z')
            l[i]++;
    }
    for (auto i = u.rbegin(); i != u.rend(); ++i)
        if (l.find(*i.operator[0]) != l.end())
            return *i;
    return "";
}

void solve()
{
    string s;
    cin >> s;
    cout << greatestLetter(s);
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
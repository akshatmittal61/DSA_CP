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

string low(string a, string b)
{
    int x = a.length(), y = b.length();
    int n = min(x, y);
    for (int i = 0; i < n; ++i)
        if (a[i] != b[i])
            return a[i] < b[i] ? a : b;
    return x < y ? a : b;
}

string reverse(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
        swap(s[i], s[j]);
    return s;
}

string Another_String_Minimization_Problem(vector<int> v, int n, int m)
{
    string s;
    fl(i, m) s += 'B';
    fl(i, n)
    {
        int a = min(v[i], m - v[i] + 1), b = max(v[i], m - v[i] + 1);
        if (a >= 1 && b >= 1)
        {
            if (s[a - 1] == 'A')
                s[b - 1] = 'A';
            else
                s[a - 1] = 'A';
        }
    }
    string t = reverse(s);
    return low(s, t);
}

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    cout << Another_String_Minimization_Problem(v, n, m);
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
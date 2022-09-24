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

string add(char a, char b, char c)
{
    string s;
    if (a == '0')
    {
        if (b != c)
            s = "01";
        else
        {
            if (b == '0')
                s = "00";
            else
                s = "10";
        }
    }
    else
    {
        if (b != c)
            s = "10";
        else
        {
            if (b == '0')
                s = "01";
            else
                s = "11";
        }
    }
    return s;
}

string addBinary(string a, string b)
{
    if (a.length() < b.length())
        swap(a, b);
    string temp_b;
    for (int i = 0; i < a.length() - b.length(); ++i)
        temp_b += '0';
    temp_b += b;
    b = temp_b;
    int n = a.length();
    char borrow = '0';
    string ans, added;
    for (int i = n - 1; i >= 0; --i)
    {
        added = add(borrow, a[i], b[i]);
        borrow = added[0];
        ans += added[1];
    }
    if (added[0] == '1')
        ans += '1';
    for (int i = 0, j = ans.length() - 1; i < j; ++i, --j)
        swap(ans[i], ans[j]);
    return ans;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << addBinary(a, b);
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
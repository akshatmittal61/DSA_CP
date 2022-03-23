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

bool isValid(string s)
{
    int n = s.size();
    stack<char> st;
    bool ans = true;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (!st.empty() && s[i] == ')')
        {
            if (st.top() == '(')
                st.pop();
            else
            {
                ans = false;
                break;
            }
        }
    }
    if (!st.empty())
        return false;
    return ans;
}

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length() - 1;
    while (h > l)
        if (str[l++] != str[h--])
            return false;
    return true;
}

bool isGood(string s)
{
    if (isPalindrome(s) || isValid(s))
        return true;
    else
        return false;
}

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int r = 0, l = 0;
    /* for (int i = 0; i < s.length(); i++)
        if (s[i] == '(')
            ++r;
        else
            ++l; */
    int i, j;
    fl(i, s.length())
    {
        if (isGood(s.substr(0, i)))
        {
            ++j;
            s.erase();
            continue;
        }
        else
            break;
    }
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
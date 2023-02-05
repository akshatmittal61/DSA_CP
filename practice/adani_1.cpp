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

int no_of_brackets_to_make_valid(string bracket_string)
{
    string s = bracket_string;
    int n = s.length();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);
        else if (s[i] == ')')
        {
            if (st.size() > 0 && st.top() == '(')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    return st.size();
}

void solve()
{
    string s;
    cin >> s;
    cout << no_of_brackets_to_make_valid(s);
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
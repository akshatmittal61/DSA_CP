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

string sortString(string s)
{
    map<char, int> m;
    set<char> st;
    for (auto i : s)
        m[i]++;
    for (auto i : s)
        st.insert(i);
    string res = "";
    int i = 0;
    while (i < s.length())
    {
        for (auto j = st.begin(); j != st.end(); ++j)
        {
            if (m[*j] > 0)
            {
                res += *j;
                --m[*j];
                ++i;
            }
        }
        for (auto j = st.rbegin(); j != st.rend(); ++j)
        {
            if (m[*j] > 0)
            {
                res += *j;
                --m[*j];
                ++i;
            }
        }
    }
    return res;
}

void solve()
{
    string s;
    cin >> s;
    cout << sortString(s);
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
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

int contains(string s, map<char, int> m)
{
    for (auto i : s)
        if (m.find(i) != m.end())
            return 1;
    return 0;
}

int canBeTypedWords(string text, string brokenLetters)
{
    vector<string> complete;
    int start = 0, noc = 0;
    for (int i = 0; i < text.length(); ++i)
    {
        ++noc;
        if (text[i] == '_' || i == text.length() - 1)
        {
            complete.push_back(text.substr(start, noc));
            start = i + 1;
            noc = 0;
        }
    }
    map<char, int> m;
    for (auto i : brokenLetters)
        m[i]++;
    int ans = 0;
    for (auto i : complete)
        ans += contains(i, m);
    return complete.size() - ans;
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << canBeTypedWords(a, b);
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
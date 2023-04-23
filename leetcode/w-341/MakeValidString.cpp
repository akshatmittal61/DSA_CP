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

int addMinimum(string word)
{
    int n = word.length();
    int ans = 0;
    if (n == 1)
        return 2;
    else if (n == 2)
    {
        if (
            (word[0] == 'a' && word[1] == 'b') ||
            (word[0] == 'b' && word[1] == 'c') ||
            (word[0] == 'a' && word[1] == 'c'))
            return 1;
        else
            return 4;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    cout << addMinimum(s);
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
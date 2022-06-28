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

bool includes(int h, int m)
{
    vector<pair<int, int>> a;
    a.push_back(make_pair(0, 0));
    a.push_back(make_pair(11, 11));
    a.push_back(make_pair(22, 22));
    a.push_back(make_pair(1, 10));
    a.push_back(make_pair(2, 20));
    a.push_back(make_pair(3, 30));
    a.push_back(make_pair(4, 40));
    a.push_back(make_pair(5, 50));
    a.push_back(make_pair(12, 21));
    a.push_back(make_pair(13, 31));
    a.push_back(make_pair(14, 41));
    a.push_back(make_pair(15, 51));
    a.push_back(make_pair(10, 1));
    a.push_back(make_pair(20, 2));
    a.push_back(make_pair(21, 12));
    a.push_back(make_pair(23, 32));
    for (int i = 0; i < a.size(); ++i)
        if (a[i].first == h && a[i].second == m)
            return true;
    return false;
}

void solve()
{
    string s, os;
    int x;
    cin >> s >> x;
    os = s;
    int h = ((int)s[0]) - 48;
    h = (h * 10) + ((int)s[1]) - 48;
    int m = ((int)s[3]) - 48;
    m = (m * 10) + ((int)s[4]) - 48;
    int oh = h, om = m;
    int ans = 0;
    do
    {
        m += x;
        h += m / 60;
        m %= 60;
        h %= 24;
        if (includes(h, m))
            ++ans;
    } while (h != oh || m != om);
    cout << ans;
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
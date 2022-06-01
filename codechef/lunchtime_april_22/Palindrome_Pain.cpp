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

void solve()
{
    int x, y;
    cin >> x >> y;
    if (((x & 1) && (y & 1)) || (x == 1 || y == 1))
    {
        cout << -1;
        return;
    }
    if (x & 1)
    {
        for (int i = 0; i < y / 2; i++)
            cout << 'b';
        for (int i = 0; i < x; i++)
            cout << 'a';
        for (int i = 0; i < y / 2; i++)
            cout << 'b';
        cout << endl;

        x -= 2;
        y -= 2;
        cout << "ab";

        for (int i = 0; i < y / 2; i++)
            cout << 'b';
        for (int i = 0; i < x; i++)
            cout << 'a';
        for (int i = 0; i < y / 2; i++)
            cout << 'b';

        cout << "ba";
    }
    else
    {
        for (int i = 0; i < x / 2; i++)
            cout << 'a';
        for (int i = 0; i < y; i++)
            cout << 'b';
        for (int i = 0; i < x / 2; i++)
            cout << 'a';
        cout << endl;

        x -= 2;
        y -= 2;
        cout << "ba";

        for (int i = 0; i < x / 2; i++)
            cout << 'a';
        for (int i = 0; i < y; i++)
            cout << 'b';
        for (int i = 0; i < x / 2; i++)
            cout << 'a';

        cout << "ab";
    }
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
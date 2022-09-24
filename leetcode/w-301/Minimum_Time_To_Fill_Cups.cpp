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

int fillCups(vector<int> &amount)
{
    int n = 0;
    int a = amount[0], b = amount[1], c = amount[2];
    while (a > 0 || b > 0 || c > 0)
    {
        ++n;
        if (a == 0 && b == 0)
            --c;
        else if (b == 0 && c == 0)
            --a;
        else if (a == 0 && c == 0)
            --b;
        else if (a == 0)
            --b, --c;
        else if (b == 0)
            --a, --c;
        else if (c == 0)
            --a, --b;
        else
        {
            if (a <= b && a <= c)
            {
                a = max(0, a - 1);
                if (b >= c)
                    b = max(0, b - 1);
                else
                    c = max(0, c - 1);
            }
            else if (b <= a && b <= c)
            {
                b = max(0, b - 1);
                if (a >= c)
                    a = max(0, a - 1);
                else
                    c = max(0, c - 1);
            }
            else if (c <= a && c <= b)
            {
                c = max(0, c - 1);
                if (a >= b)
                    a = max(0, a - 1);
                else
                    b = max(0, b - 1);
            }
        }
    }
    return n;
}

void solve()
{
    vector<int> v;
    fl(i, 3)
    {
        int k;
        cin >> k;
        v.push_back(k);
    }
    cout << fillCups(v);
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
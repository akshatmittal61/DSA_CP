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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
        if (b == d)
            cout << "Takahashi";
        else
        {
            if (b < d)
                cout << "Takahashi";
            else
                cout << "Aoki";
        }
    }
    else
    {
        if (a < c)
            cout << "Takahashi";
        else
            cout << "Aoki";
    }
}

int main()
{
    _ fs
    solve();
    return 0;
}
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
    int a, b;
    cin >> a >> b;
    int x = max(a, b);
    switch (x)
    {
    case 1:
        cout << "1/1";
        break;
    case 2:
        cout << "5/6";
        break;
    case 3:
        cout << "2/3";
        break;
    case 4:
        cout << "1/2";
        break;
    case 5:
        cout << "1/3";
        break;
    case 6:
        cout << "1/6";
        break;
    default:
        break;
    }
}

int main()
{
    _ fs
    solve();
    return 0;
}
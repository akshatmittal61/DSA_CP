#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll a[3][4];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 4; j++)
            cin >> a[i][j];
    ll mins[4], sum = 0;
    for (int i = 0; i < 4; i++)
    {
        mins[i] = min(min(a[0][i], a[1][i]), a[2][i]);
        sum += mins[i];
    }
    if (sum < 1000000)
    {
        cout << "IMPOSSIBLE";
        return;
    }
    if (sum == 1000000)
    {
        for (int i = 0; i < 4; i++)
            cout << mins[i] << " ";
        return;
    }
    while (sum > 1000000)
    {
        for (int i = 0; i < 4; i++)
            if (mins[i] > 0)
                --mins[i];
        sum = mins[0] + mins[1] + mins[2] + mins[3];
        int k = 1000000 - sum;
        for (int i = 0; i < k; i++)
            ++mins[i];
    }
    for (int i = 0; i < 4; i++)
        cout << mins[i] << " ";
}

int main()
{
    ll test = 1;
    cin >> test;
    for (int i = 1; i <= test; ++i)
    {
        cout << "Case #" << i << ": ";
        solve();
        cout << endl;
    }
    return 0;
}
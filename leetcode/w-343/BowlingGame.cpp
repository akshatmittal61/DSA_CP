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

int isWinner(vector<int> &player1, vector<int> &player2)
{
    int scoreA = 0, scoreB = 0;
    int n = player1.size();
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            scoreA += player1[i];
        else if (i == 1)
        {
            if (player1[0] == 10)
                scoreA += 2 * player1[i];
            else
                scoreA += player1[i];
        }
        else
        {
            if (player1[i - 1] == 10 || player1[i - 2] == 10)
                scoreA += 2 * player1[i];
            else
                scoreA += player1[i];
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (i == 0)
            scoreB += player2[i];
        else if (i == 1)
        {
            if (player2[0] == 10)
                scoreB += 2 * player2[i];
            else
                scoreB += player2[i];
        }
        else
        {
            if (player2[i - 1] == 10 || player2[i - 2] == 10)
                scoreB += 2 * player2[i];
            else
                scoreB += player2[i];
        }
    }
    if (scoreA == scoreB)
        return 0;
    else if (scoreA > scoreB)
        return 1;
    else
        return 2;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), b(n);
    fl(i, n) cin >> a[i];
    fl(i, n) cin >> b[i];
    cout << isWinner(a, b);
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
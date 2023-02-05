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

/*
The deletion distance between two strings is the minimum number of characters that you need to delete in the two strings in order to have the same string. The deletions distance between "cat" and "at" is 1, becane you can just delete the first character of cat. The deletion distance between "cat" and "hal is 2. because you need to delete th first character of both words Of course, the deletion distance between two strings can't be greater than the sum of their lengths, because you can always just delete both of the strings entirely
Implement an efficient function to find the deletion distance between two strings.
You can refer to the Wikipedia article on the algorithm for edit distance if you want to. The algorithm there is not quite the same as the algorithm required here, but it involves similar ideas.
 */
int deletion_distance(string a, string b)
{
    int n = a.length();
    int m = b.length();
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            if (i == 0)
                dp[i][j] = j;
            else if (j == 0)
                dp[i][j] = i;
            else if (a[i - 1] == b[j - 1])
                dp[i][j] = dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
    return dp[n][m];
    // return n + m - 2 * dp[n][m];
}

void solve()
{
    string a, b;
    cin >> a >> b;
    cout << deletion_distance(a, b);
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
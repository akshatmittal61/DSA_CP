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

int maxDivScore(vector<int> &nums, vector<int> &divisors)
{
    int ansA = divisors[0], ansB = 0;
    for (auto divisor : divisors)
    {
        int c = 0;
        for (auto num : nums)
        {
            if (num % divisor == 0)
                ++c;
        }
        if (c == ansB)
            ansA = min(ansA, divisor);
        else if (c > ansB)
            ansB = c, ansA = divisor;
    }
    return ansA;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<int> v1(m), v2(n);
    fl(i, m) cin >> v1[i];
    fl(i, n) cin >> v2[i];
    cout << maxDivScore(v1, v2);
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
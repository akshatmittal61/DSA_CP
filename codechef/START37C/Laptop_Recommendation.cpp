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

int freq(int a[], int n, int s)
{
    int k = 0;
    fl(i, n) if (a[i] == s)++ k;
    return k;
}

void solve()
{
    int n;
    cin >> n;
    int a[n];
    int b[10] = {0};
    fl(i, n) { cin >> a[i]; }
    fl(i, n) { b[a[i] - 1]++; }
    int maxi = 0, max = b[0];
    fl(i, 10)
    {
        if (max < b[i])
        {
            maxi = i;
            max = b[i];
        }
    }
    if (freq(b, 10, max) > 1)
        cout << "CONFUSED";
    else
        cout << maxi + 1;
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
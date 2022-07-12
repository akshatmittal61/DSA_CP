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

double findMedianSortedArrays(const vector<int> &A, const vector<int> &B)
{
    long long m = A.size(), n = B.size();
    if (m == 0)
    {
        if (n & 1)
            return (double)B[(n - 1) / 2];
        else
            return ((double)B[(n - 2) / 2] + (double)B[n / 2]) / 2;
    }
    else if (n == 0)
    {
        if (m & 1)
            return (double)A[(m - 1) / 2];
        else
            return ((double)A[(m - 2) / 2] + (double)A[m / 2]) / 2;
    }
    long long total = m + n;
    long long fh = (m + n + 1) / 2;
    long long l = 0, h = fh, l1, r1, l2, r2;
    double a, b, c, d;
    l = 0, h = fh;
    while (l <= h)
    {
        l1 = (l + h) / 2;
        l2 = fh - l1;
        a = l1 <= 0 ? INT_MIN : A[l1 - 1];
        b = l1 >= m ? INT_MAX : A[l1];
        c = l2 <= 0 ? INT_MIN : B[l2 - 1];
        d = l2 >= n ? INT_MAX : B[l2];
        if (a <= d && c <= b)
        {
            if (total & 1)
                return max(a, c);
            else
                return (max(a, c) + min(b, d)) / 2;
        }
        else if (a > d)
            h = l1 - 1;
        else if (c > b)
            l = l1 + 1;
    }
    return -1;
}

void solve()
{
    ll m, n;
    cin >> m >> n;
    vector<int> a, b;
    fl(i, m)
    {
        int k;
        cin >> k;
        a.push_back(k);
    }
    fl(i, n)
    {
        int k;
        cin >> k;
        b.push_back(k);
    }
    cout << findMedianSortedArrays(a, b);
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
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

double median(int a, int b, int c, int d, int m, int n)
{
    if ((m + n) & 1)
        return (double)max(a, c);
    else
        return ((double)max(a, c) + (double)min(b, d)) / 2;
}

double findMedianSortedArrays(vector<int> &nums1, vector<int> &nums2)
{
    int m = nums1.size(), n = nums2.size();
    if (m == 0)
    {
        if (n & 1)
            return (double)nums2[(n - 1) / 2];
        else
            return (double)(nums2[(n - 2) / 2] + (double)nums2[n / 2]) / 2;
    }
    else if (n == 0)
    {
        if (m & 1)
            return (double)nums1[(m - 1) / 2];
        else
            return (double)(nums1[(m - 2) / 2] + (double)nums1[m / 2]) / 2;
    }
    int fh = (m + n + 1) / 2;
    int l = 0, h = fh;
    int l1 = fh, l2 = fh - l1;
    while (l <= h)
    {
        l1 = l + (h - l) / 2;
        l2 = fh - l1;
        int a = l1 <= 0 ? INT_MIN : nums1[l1 - 1];
        int b = l1 >= m ? INT_MAX : nums1[l1];
        int c = l2 <= 0 ? INT_MIN : nums2[l2 - 1];
        int d = l2 >= n ? INT_MAX : nums2[l2];
        if (a <= d && c <= b)
            return median(a, b, c, d, m, n);
        else if (a > d)
            h = l1 - 1;
        else if (c > b)
            l = l1 + 1;
    }
    return -1;
}

void solve()
{
    int m, n;
    cin >> m >> n;
    vector<int> a, b;
    fl(i, m)
    {
        int k;
        cin >> k;
        a.pb(k);
    }
    fl(i, n)
    {
        int k;
        cin >> k;
        b.pb(k);
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
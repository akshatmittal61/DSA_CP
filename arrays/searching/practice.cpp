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

int indexOfFirstOccurence(vector<int> v, int k)
{
    int n = v.size();
    if (k < v[0] || k > v[n - 1])
        return -1;
    int beg = 0, end = n - 1;
    int mid = end - ((end - beg) / 2);
    while (beg <= end)
    {
        mid = end - ((end - beg) / 2);
        if (v[mid] == k)
        {
            if (mid > 0 && v[mid - 1] == k)
                end = mid - 1;
            else
                return mid;
        }
        else if (v[mid] > k)
            end = mid - 1;
        else if (v[mid] < k)
            beg = mid + 1;
    }
    return -1;
}

int indexOfLastOccurence(vector<int> v, int k)
{
    int n = v.size();
    if (k < v[0] || k > v[n - 1])
        return -1;
    int beg = 0, end = n - 1;
    int mid = end - ((end - beg) / 2);
    while (beg <= end)
    {
        mid = end - ((end - beg) / 2);
        if (v[mid] == k)
        {
            if (mid < n - 1 && v[mid + 1] == k)
                beg = mid + 1;
            else
                return mid;
        }
        else if (v[mid] > k)
            end = mid - 1;
        else if (v[mid] < k)
            beg = mid + 1;
    }
    return -1;
}

int countOfOccurences(vector<int> v, int k)
{
    int n = v.size();
    int beg = 0, end = n - 1;
    int mid = end - ((end - beg) / 2);
    int begIndex = -1, endIndex = -1;
    while (beg <= end)
    {
        mid = end - ((end - beg) / 2);
        if (v[mid] > k)
            end = mid - 1;
        else if (v[mid] < k)
            beg = mid + 1;
        else if (v[mid] == k)
        {
            if (mid > 0 && v[mid] == v[mid - 1])
                end = mid - 1;
            else
            {
                begIndex = mid;
                break;
            }
        }
    }
    if (begIndex == -1)
        return 0;
    if (begIndex < n - 1 && v[begIndex] == v[begIndex + 1])
    {
        beg = begIndex, endIndex = begIndex, end = n - 1;
        while (beg <= end)
        {
            mid = end - ((end - beg) / 2);
            if (v[mid] > k)
                beg = mid + 1;
            else if (v[mid] < k)
                end = mid - 1;
            else if (v[mid] == k)
            {
                if (mid < n - 1 && v[mid] == v[mid + 1])
                    beg = mid + 1;
                else
                {
                    endIndex = mid;
                    break;
                }
            }
        }
    }
    else
        endIndex = begIndex;
    return endIndex - begIndex + 1;
}

int countOf1sInSortedArray(vector<int> v)
{
    /* int n = v.size();
    int k = indexOfFirstOccurence(v, 1);
    if (k == -1)
        return 0;
    else
        return n - k; */
    int n = v.size();
    int beg = 0, end = n - 1;
    int mid = end - ((end - beg) / 2);
    while (beg <= end)
    {
        mid = end - ((end - beg) / 2);
        if (v[mid] == 0)
            beg = mid + 1;
        else
        {
            if (mid > 0 && v[mid - 1] == 1)
                end = mid - 1;
            else
                return n - mid;
        }
    }
    return 0;
}

int squareRoot(int n)
{
    int beg = 0, end = n, ans = 0;
    int mid = end - ((end - beg) / 2);
    while (beg < end)
    {
        mid = end - ((end - beg) / 2);
        int sq = mid * mid;
        if (sq == n)
            return mid;
        else if (sq > n)
            end = mid - 1;
        else
        {
            beg = mid + 1;
            ans = mid;
        }
    }
    return ans;
}

int getIndexByRecrusiveSearch(vector<int> v, int k, int beg, int end)
{
    if (beg > end || k < v[0] || k > v[v.size() - 1])
        return -1;
    int mid = end - ((end - beg) / 2);
    if (v[mid] == k)
        return mid;
    else if (v[mid] > k)
        return getIndexByRecrusiveSearch(v, k, beg, mid - 1);
    else if (v[mid] < k)
        return getIndexByRecrusiveSearch(v, k, mid + 1, end);
    return -1;
}

int getIndex(vector<int> v, int k)
{
    int n = v.size();
    if (k < v[0] || k > v[n - 1])
        return -1;
    int beg = 0, end = n - 1;
    int mid = end - ((end - beg) / 2);
    while (beg <= end)
    {
        mid = end - ((end - beg) / 2);
        if (v[mid] == k)
            return mid;
        else if (v[mid] > k)
            end = mid - 1;
        else if (v[mid] < k)
            beg = mid + 1;
    }
    return -1;
}

void solve()
{
    int ch;
    int n, k;
    cin >> ch >> n;
    if (ch == 1 || ch == 2 || ch == 3 || ch == 4 || ch == 5)
        cin >> k;
    vector<int> v(n);
    if (ch == 1 || ch == 2 || ch == 3 || ch == 4 || ch == 5 || ch == 6)
        fl(i, n) cin >> v[i];
    switch (ch)
    {
    case 1:
        cout << getIndex(v, k);
        break;
    case 2:
        cout << getIndexByRecrusiveSearch(v, k, 0, n - 1);
        break;
    case 3:
        cout << indexOfFirstOccurence(v, k);
        break;
    case 4:
        cout << indexOfLastOccurence(v, k);
        break;
    case 5:
        cout << countOfOccurences(v, k);
        break;
    case 6:
        cout << countOf1sInSortedArray(v);
        break;
    case 7:
        cout << squareRoot(n);
        break;
    default:
        break;
    }
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
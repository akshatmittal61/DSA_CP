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

int getLargestElement(vector<int> v)
{
    int ans = 0, n = v.size();
    fl(i, n)
    {
        if (v[i] > v[ans])
            ans = i;
    }
    return ans;
}

int secondLargestElement(vector<int> v)
{
    int ans = -1, m = 0, n = v.size();
    fl(i, n)
    {
        if (v[i] > v[m])
        {
            ans = m;
            m = i;
        }
        if ((ans == -1 && v[i] < v[m]) || (v[i] > v[ans] && v[i] < v[m]))
            ans = i;
    }
    return ans;
}

bool isSorted(vector<int> v)
{
    int n = v.size();
    fl(i, n - 1)
    {
        if (v[i] > v[i + 1])
            return false;
    }
    return true;
}

void reverseArray(vector<int> &v)
{
    int n = v.size();
    for (int i = 0, j = n - 1; i < j; ++i, --j)
        swap(v[i], v[j]);
}

void traverse(vector<int> v)
{
    for (auto x : v)
        cout << x << ' ';
    cout << endl;
}

void removeDuplicatesFromSorted(vector<int> &v)
{
    int n = v.size();
    vector<int> arr;
    for (int i = 0; i < n; ++i)
    {
        arr.push_back(v[i]);
        while (i < n - 1 && v[i] == v[i + 1])
            ++i;
    }
    v = arr;
}

void moveZeroesToEnd(vector<int> &v)
{
    int nz = 0;
    for (auto x : v)
        nz += (x == 0);
    vector<int> ans;
    for (auto x : v)
    {
        if (x != 0)
            ans.push_back(x);
    }
    fl(i, nz) ans.push_back(0);
    v = ans;
}

void leftRotateBy1(vector<int> &v)
{
    v.push_back(v[0]);
    v.erase(v.begin());
}

void leftRotateByD(vector<int> &v, int d)
{
    int n = v.size();
    reverse(v.begin(), v.begin() + d);
    reverse(v.begin() + d, v.begin() + n);
    reverse(v.begin(), v.end());
    /* vector<int> a;
    int n = v.size();
    for (int i = 0; i < d; ++i)
        a.push_back(v[i]);
    for (int i = 0; i < n - d; ++i)
        v[i] = v[i + d];
    for (int i = n - d; i < n; ++i)
        v[i] = a[i - n + d]; */
}

vector<int> leadersInArray(vector<int> v)
{
    int n = v.size();
    int gr = v[n - 1];
    vector<int> ans;
    ans.push_back(v[n - 1]);
    for (int i = n - 1; i >= 0; --i)
    {
        if (v[i] > gr)
        {
            gr = v[i];
            ans.push_back(v[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int maximumDifference(vector<int> v)
{
    int n = v.size();
    int ans = INT_MIN;
    /* for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (v[j] - v[i] > ans)
                ans = v[j] - v[i];
        }
    } */
    int Min = v[0];
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, v[i] - Min);
        Min = min(Min, v[i]);
    }
    return ans;
}

void printFreqInSortedArray(vector<int> v)
{
    int n = v.size();
    for (int i = 0; i < n; ++i)
    {
        int c = 1;
        while (i < n - 1 && v[i] == v[i + 1])
            ++c, ++i;
        if (c == 1)
            cout << v[i];
        else
            cout << v[i - 1];
        cout << ' ' << c << endl;
    }
}

void solve()
{
    int n, ch, k;
    cin >> n >> ch;
    vector<int> v(n);
    fl(i, n) cin >> v[i];
    switch (ch)
    {
    case 0:
        cout << getLargestElement(v);
        break;
    case 1:
        cout << secondLargestElement(v);
        break;
    case 2:
        cout << isSorted(v);
        break;
    case 3:
        reverseArray(v);
        traverse(v);
        break;
    case 4:
        removeDuplicatesFromSorted(v);
        traverse(v);
        break;
    case 5:
        moveZeroesToEnd(v);
        traverse(v);
        break;
    case 6:
        leftRotateBy1(v);
        traverse(v);
        break;
    case 7:
        cin >> k;
        leftRotateByD(v, k);
        traverse(v);
        break;
    case 8:
        traverse(leadersInArray(v));
        break;
    case 9:
        cout << maximumDifference(v);
        break;
    case 10:
        printFreqInSortedArray(v);
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
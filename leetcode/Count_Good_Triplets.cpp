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

bool diff(int a, int b, int c)
{
    return abs(a - b) <= c;
}
int countGoodTriplets(vector<int> &arr, int a, int b, int c)
{
    int ans = 0, n = arr.size();
    for (int i = 0; i < n - 2; ++i)
    {
        for (int j = i + 1; j < n - 1; ++j)
        {
            for (int k = j + 1; k < n; ++k)
            {
                bool A = diff(arr[i], arr[j], a);
                bool B = diff(arr[j], arr[k], b);
                bool C = diff(arr[i], arr[k], c);
                if (A && B && C)
                    ++ans;
            }
        }
    }
    return ans;
}

void solve()
{
    int n, a, b, c;
    cin >> n;
    vector<int> v;
    fl(i, n)
    {
        int k;
        cin >> k;
        v.pb(k);
    }
    cin >> a >> b >> c;
    cout << countGoodTriplets(v, a, b, c);
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
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, t = 0, k = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int max = a[0];
    for (int i = 0; i < n; ++i)
        if (a[i] > max)
            max = a[i], k = i;
    for (int i = k; i > 0; --i)
    {
        swap(a[i - 1], a[i]);
        ++t;
    }
    int min = a[0];
    k = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] <= min)
            min = a[i], k = i;
    for (int i = k; i < n - 1; ++i)
    {
        swap(a[i], a[i + 1]);
        ++t;
    }
    cout << t << endl;
    return 0;
}

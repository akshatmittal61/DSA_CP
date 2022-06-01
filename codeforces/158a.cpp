#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, a[50], t = 0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (a[i] == 0)
            break;
        if (a[i] >= a[k - 1])
            ++t;
    }
    cout << t;
    return 0;
}

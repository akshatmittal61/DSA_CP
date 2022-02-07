#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int a[t], i = 0, k = 0;
    while (t--)
    {
        cin >> a[i];
        if (i == 0)
        {
            ++i;
            continue;
        }
        else if (i == 1)
        {
            if (a[0] != a[1])
                ++k;
        }
        else
        {
            int sm = a[0], lg = a[0];
            for (int j = 0; j < i; ++j)
            {
                if (a[j] < sm)
                    sm = a[j];
                if (a[j] > lg)
                    lg = a[j];
            }
            if (a[i] < sm || a[i] > lg)
                ++k;
        }
        ++i;
    }
    cout << k << endl;
    return 0;
}

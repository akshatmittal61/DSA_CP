#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, y, p;
    cin >> t;
    while (t--)
    {
        cin >> n >> x >> y;
        p = n * x + n * y;
        int i = 0;
        for (int i = 0; i <= n; ++i)
        {
            int q = 0;
            q += ((i / 4) * y);
            if (i % 4 != 0)
                q += y;
            q += (((n - i) / 100) * x);
            if ((n - i) % 100 != 0)
                q += x;
            p = min(p, q);
        }
        cout << p << endl;
    }
    return 0;
}

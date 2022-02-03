#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int k, l, m, n, d, t = 0;
    cin >> k >> l >> m >> n >> d;
    if (k == 1 || l == 1 || m == 1 || n == 1)
        t = d;
    else
    {
        for (int i = 1; i <= d; ++i)
            if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
                ++t;
    }
    cout << t << endl;
    return 0;
}

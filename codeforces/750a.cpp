#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k, t = 240, l = 0;
    cin >> n >> k;
    t -= k;
    for (int i = 1; i <= n; ++i)
    {
        int tot = 5 * i * (i + 1) / 2;
        if (tot <= t)
            ++l;
    }
    cout << l << endl;
    return 0;
}

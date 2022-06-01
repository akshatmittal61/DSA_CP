#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, p, q, k = 0;
    cin >> t;
    while (t--)
    {
        cin >> p >> q;
        if (q - p >= 2)
            ++k;
    }
    cout << k << endl;
    return 0;
}

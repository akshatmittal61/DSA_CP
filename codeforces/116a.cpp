#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, k = 0, M = 0;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        k -= a;
        k += b;
        M = max(k, M);
    }
    cout << M << endl;
    return 0;
}

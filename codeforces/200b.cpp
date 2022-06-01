#include <bits/stdc++.h>
using namespace std;

int main()
{
    long double n, p, s = 0, t;
    cin >> n;
    t = n;
    while (t--)
    {
        cin >> p;
        s += p;
    }
    cout << setprecision(12) << fixed;
    cout << (s / n) << endl;
    return 0;
}

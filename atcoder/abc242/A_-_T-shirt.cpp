#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, x;
    double k = 0;
    cin >> a >> b >> c >> x;
    if (x <= a)
        k = 1.000000000000;
    else if (x > b)
        k = 0.000000000000;
    else
        k = double(c) / double(b - a);
    cout << fixed;
    cout << setprecision(12);
    cout << double(k) << endl;
    return 0;
}
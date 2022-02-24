#include <bits/stdc++.h>
using namespace std;

long long int lcm(long long int x, long long int y)
{
    long long int a, b, t, hcf, lcm;
    a = x, b = y;
    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    hcf = a;
    lcm = (x * y) / hcf;
    return lcm;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> b >> c;
        if (c % b == 0)
            cout << c / b;
        else
            cout << lcm(b, c) / b;
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int ci(int p, int r, int t)
{
    return p * (pow(0.01 * r + 1, t));
}

int main()
{
    int a, b, i = 0;
    cin >> a >> b;
    while (ci(a, 200, i) <= ci(b, 100, i))
        ++i;
    cout << i << endl;
    return 0;
}

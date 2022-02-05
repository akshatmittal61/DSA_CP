#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, k = 0, c[5] = {100, 20, 10, 5, 1};
    cin >> n;
    for (int i = 0; i < 5; ++i)
    {
        if (n >= c[i])
        {
            k += n / c[i];
            n = n % c[i];
        }
    }
    cout << k << endl;
    return 0;
}

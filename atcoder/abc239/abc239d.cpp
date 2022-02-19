#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
    for (int i = 2; i <= sqrt(n); ++i)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    bool k = false;
    for (int i = a; i <= b; ++i)
    {
        bool t = false;
        for (int j = c; j <= d; ++j)
        {
            if (isPrime(i + j))
                t = true;
        }
        if (!t)
            k = true;
    }
    if (k)
        cout << "Takahashi" << endl;
    else
        cout << "Aoki" << endl;
    return 0;
}

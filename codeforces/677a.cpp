#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, h, k = 0, a;
    cin >> n >> h;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a <= h)
            ++k;
        else
            k += 2;
    }
    cout << k << endl;
    return 0;
}

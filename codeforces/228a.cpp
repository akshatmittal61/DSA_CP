#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int a[4];
    int k = 0;
    for (int i = 0; i < 4; i++)
        cin >> a[i];
    int n = 4;
    for (int i = 0; i < n; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] == a[j])
            {
                ++k;
                --i;
                for (int l = j; l < n; ++l)
                    a[l] = a[l + 1];
                a[n] = 0;
                n--;
            }
        }
    }
    cout << k << endl;
    return 0;
}

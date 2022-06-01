#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    continue;
                else if (abs(a[i] - a[j]) <= 1)
                {
                    if (a[i] < a[j])
                        for (int k = i; k < n; ++k)
                            a[k] = a[k + 1];
                    else
                        for (int k = j; k < n; ++k)
                            a[k] = a[k + 1];
                    --n;
                }
            }
        }
        if (n == 1)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

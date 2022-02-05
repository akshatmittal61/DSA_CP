#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n, a[30], h[30], k = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> h[i] >> a[i];
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i == j)
                continue;
            else
            {
                if (h[i] == a[j])
                    ++k;
            }
        }
    }
    cout << k << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, s = 0, a;
        cin >> n;
        for (int i = 1; i <= 2 * n; ++i)
        {
            cin >> a;
            s += a;
        }
        if (s % 2 == 0)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

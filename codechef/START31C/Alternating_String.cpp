#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        string s;
        cin >> n >> s;
        int n0 = 0, n1 = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '0')
                ++n0;
            else
                ++n1;
        }
        if (n0 == n1)
        {
            cout << 2 * n0;
        }
        else
        {
            int k = min(n0, n1);
            cout << 2 * k + 1;
        }
        cout << endl;
    }
    return 0;
}

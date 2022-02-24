#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int k = 0, n = s.length();
        for (int i = 0; i < floor(n / 2); ++i)
        {
            cout << s[i] << ' ' << s[n - i - 1];
            if (s[i] == s[n - i - 1])
                ++k;
            else
                break;
        }
        cout << n - k - 1;
        cout << endl;
    }
    return 0;
}

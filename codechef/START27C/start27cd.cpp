#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k = 0;
        string s;
        cin >> n >> s;
        for (int i = 0; i < n - 1; ++i)
        {
            if (s[i] == s[i + 1])
                ++k;
        }
        cout << n - k;
        cout << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

bool pal(string s)
{
    int n = s.length();
    for (int i = 0, j = n - 1; i < j; ++i, --j)
    {
        if (s[i] != s[j])
            return false;
    }
    return true;
}

int main()
{
    int t, n, k;
    string s;
    cin >> t;
    while (t--)
    {
        bool l = true;
        cin >> n >> k >> s;
        if (k == 0 || pal(s))
            l = false;
        if (l)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}

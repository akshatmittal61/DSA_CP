#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k = 0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] == s[i + 1])
        {
            for (int j = i; j < n; ++j)
                s[j] = s[j + 1];
            --i;
            s[n] = '\0';
            --n;
            ++k;
        }
    }
    cout << k << endl;
    return 0;
}

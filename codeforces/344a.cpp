#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k = 1;
    string s, m;
    cin >> t;
    cin >> s;
    m = s;
    t--;
    while (t--)
    {
        cin >> s;
        if (m != s)
            ++k;
        m = s;
    }
    cout << k << endl;
    return 0;
}

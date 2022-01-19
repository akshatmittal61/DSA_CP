#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s[0] == '+' && s[1] == '+')
            ++x;
        else if (s[0] == '-' && s[1] == '-')
            --x;
        else if (s[2] == '+' && s[1] == '+')
            x++;
        else if (s[2] == '-' && s[1] == '-')
            x--;
    }
    cout << x;
    cout << endl;
    return 0;
}

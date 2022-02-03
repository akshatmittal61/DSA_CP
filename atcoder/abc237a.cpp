#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    bool k = false;
    cin >> s;
    if (s[0] == '-')
    {
        s.erase(0, 1);
        if (s.length() < 10)
            k = true;
        else if (s.length() == 10)
        {
            if (s <= "2147483648")
                k = true;
        }
    }
    else
    {
        if (s.length() < 10)
            k = true;
        else if (s.length() == 10)
        {
            if (s < "2147483648")
                k = true;
        }
    }
    if (k)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}
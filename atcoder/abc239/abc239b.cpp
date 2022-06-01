#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int n = s.length();
    if (s[n - 1] == '0' || s[0] != '-')
    {
        if (n == 1)
        {
            cout << 0 << endl;
            return 0;
        }
        for (int i = 0; i < n - 1; ++i)
            cout << s[i];
        cout << endl;
        return 0;
    }
    if (n == 2)
    {
        cout << "-1" << endl;
        return 0;
    }
    if (s[n - 2] != '9')
    {
        for (int i = 0; i < n - 2; ++i)
            cout << s[i];
        cout << ++s[n - 2] << endl;
        return 0;
    }
    cout << "-";
    int k = n - 1;
    if (s[1] == '9')
    {
        cout << '1';
        k = 1;
    }
    else
    {
        for (int i = 1; i < n - 1; ++i)
        {
            if (s[i + 1] == '9')
            {
                cout << ++s[i];
                k = i + 1;
                break;
            }
            else
                cout << s[i];
        }
    }
    for (int j = k; j < n - 1; ++j)
        cout << '0';
    cout << endl;
    return 0;
}

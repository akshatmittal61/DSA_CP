#include <bits/stdc++.h>
using namespace std;

int search(string s, char a)
{
    int k = -1;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == a)
            return i;
    }
    return k;
}

int main()
{
    bool k = true;
    string a, b, c;
    cin >> a >> b >> c;
    for (int i = 0; i < a.length(); ++i)
    {
        int d = search(c, a[i]);
        if (d == -1)
        {
            k = false;
            break;
        }
        else
            c.erase(d, 1);
    }
    for (int i = 0; i < b.length(); ++i)
    {
        int d = search(c, b[i]);
        if (d == -1)
        {
            k = false;
            break;
        }
        else
            c.erase(d, 1);
    }
    if (c.length() > 0)
        k = false;
    if (!k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}

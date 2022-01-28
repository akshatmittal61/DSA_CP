#include <bits/stdc++.h>
using namespace std;

bool check(int a)
{
    int b = a, m = 0;
    if (a == 0)
        return false;
    while (a)
    {
        m = a % 10;
        if (m != 4 && m != 7)
            return false;
        a /= 10;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    int k = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '4' || s[i] == '7')
            ++k;
    }
    if (check(k))
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}

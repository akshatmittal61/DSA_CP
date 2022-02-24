#include <bits/stdc++.h>
using namespace std;

int pos(string s, char a)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == a)
            return i;
    }
    return -1;
}
bool check(string t, char s)
{
    return pos(t, s) < pos(t, s - 32);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (check(s, 'r') && check(s, 'g') && check(s, 'b'))
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

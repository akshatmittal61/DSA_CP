#include <bits/stdc++.h>
using namespace std;

bool found(string s, char c, int n)
{
    for (int i = 0; i < n; ++i)
        if (s[i] == c)
            return true;
    return false;
}
int length(string s)
{
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}

int main()
{
    string s;
    cin >> s;
    int l = length(s);
    for (int i = 0; i < l; ++i)
    {
        if (found(s, s[i], i))
        {
            for (int j = i; j < l; ++j)
                s[j] = s[j + 1];
            s[l] = '\0';
            --l;
            --i;
        }
        l = length(s);
    }
    (l % 2 == 0) ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
    cout << endl;
    return 0;
}

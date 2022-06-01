#include <bits/stdc++.h>
using namespace std;

int length(string s)
{
    int i = 0;
    while (s[i] != '\0')
        ++i;
    return i;
}
int strNum(string s)
{
    int p = 0;
    for (int i = 0; s[i] != '\0'; ++i)
        p = (p * 10) + (int)(s[i] - 48);
    return p;
}

int main()
{
    int n;
    string s;
    cin >> s >> n;
    while (n)
    {
        if (s[length(s) - 1] == '0')
            s[length(s) - 1] = '\0';
        else
            s[length(s) - 1] -= 1;
        --n;
    }
    cout << strNum(s) << endl;
    return 0;
}

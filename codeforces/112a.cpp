#include <bits/stdc++.h>
using namespace std;

int lexo(char c)
{
    if (c >= 65 && c <= 90)
        return c;
    else
        return c - 32;
}

int main()
{
    int l = 0, k = 0;
    string a, b;
    cin >> a >> b;
    for (int i = 0; a[i] != '\0'; ++i)
    {
        if (lexo(a[i]) == lexo(b[i]))
            continue;
        else if (lexo(a[i]) < lexo(b[i]))
        {
            k = -1;
            break;
        }
        else
        {
            k = 1;
            break;
        }
    }
    cout << k;
    return 0;
}

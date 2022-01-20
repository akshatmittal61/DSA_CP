#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int nup = 0, nsm = 0;
    cin >> s;
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] >= 65 && s[i] <= 90)
            ++nup;
        else if (s[i] >= 97 && s[i] <= 122)
            ++nsm;
    }
    if (nup > nsm)
    {
        for (int i = 0; s[i] != '\0'; ++i)
            if (s[i] >= 97 && s[i] <= 122)
                s[i] -= 32;
    }
    else
    {
        for (int i = 0; s[i] != '\0'; ++i)
            if (s[i] >= 65 && s[i] <= 90)
                s[i] += 32;
    }
    cout << s << endl;
    return 0;
}

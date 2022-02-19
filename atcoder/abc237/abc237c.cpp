#include <bits/stdc++.h>
using namespace std;

bool pal(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; ++i, --j)
        if (s[i] != s[j])
            return false;
    return true;
}
bool check(string s)
{
    if (pal(s))
        return true;
    else
    {
        int i = 0;
        do
        {
            string t = s;
            s = "a";
            s.append(t);
            if (pal(s))
                return true;
            ++i;
        } while (!pal(s) && i < 10000);
    }
    return false;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}

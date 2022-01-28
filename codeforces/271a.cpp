#include <bits/stdc++.h>
using namespace std;

bool check(int y)
{
    string s;
    int a = y, m;
    while (a)
    {
        m = a % 10;
        s += char(m + 48);
        a /= 10;
    }
    for (int i = 0; i < s.length(); ++i)
        for (int j = 0; j < s.length(); ++j)
            if (i != j && s[i] == s[j])
                return false;
    return true;
}

int main()
{
    int y;
    cin >> y;
    do
    {
        ++y;
    } while (!check(y));
    cout << y << endl;
    return 0;
}

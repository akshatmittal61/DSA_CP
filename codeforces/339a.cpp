#include <bits/stdc++.h>
using namespace std;
int length(string a)
{
    int i = 0;
    while (a[i] != '\0')
        ++i;
    return i;
}
int main()
{
    string s;
    cin >> s;
    int n = length(s);
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j += 2)
            if (s[j] - 48 > s[j + 2] - 48)
                swap(s[j], s[j + 2]);
    cout << s << endl;
    return 0;
}

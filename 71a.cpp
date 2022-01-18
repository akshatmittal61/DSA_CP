#include <iostream>
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
    int t;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> s;
        if (length(s) <= 10)
            cout << s;
        else
            cout << s[0] << length(s) - 2 << s[length(s) - 1];
        cout << endl;
    }
    return 0;
}
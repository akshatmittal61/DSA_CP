#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, d = 0, n;
    string s;
    cin >> n;
    cin >> s;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'A')
            ++a;
        if (s[i] == 'D')
            ++d;
    }
    if (a == d)
        cout << "Friendship";
    else if (a < d)
        cout << "Danik";
    else
        cout << "Anton";
    cout << endl;
    return 0;
}

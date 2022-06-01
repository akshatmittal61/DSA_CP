#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b;
        c = 21 - (a + b);
        if (c > 10 || c < 0)
            cout << "-1";
        else
            cout << c;
        cout << endl;
    }
    return 0;
}

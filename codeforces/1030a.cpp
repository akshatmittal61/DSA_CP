#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, m;
    bool k = true;
    cin >> t;
    while (t--)
    {
        cin >> m;
        if (m == 1)
        {
            k = false;
            break;
        }
    }
    if (k)
        cout << "EASY";
    else
        cout << "HARD";
    cout << endl;
    return 0;
}

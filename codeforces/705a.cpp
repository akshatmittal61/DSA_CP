#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, t;
    cin >> n;
    t = n;
    while (n)
    {
        if ((t - n) % 2 == 0)
            cout << "I hate ";
        else
            cout << "I love ";
        if (n - 1 == 0)
            cout << "it";
        else
            cout << "that ";
        --n;
    }
    cout << endl;
    return 0;
}

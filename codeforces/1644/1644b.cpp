#include <bits/stdc++.h>
using namespace std;

bool antiFib(int a[], int p, int q)
{
    for (int i = p; i < q; ++i)
    {
        if (a[i - 1] + a[i - 2] == a[i])
            return false;
    }
    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << endl;
    }
    return 0;
}

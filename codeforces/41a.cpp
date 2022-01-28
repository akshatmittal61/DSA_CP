#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0, j = a.length() - 1; i < j; ++i, --j)
        swap(a[i], a[j]);
    if (a == b)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}

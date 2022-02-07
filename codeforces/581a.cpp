#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    int c = min(a, b);
    a -= c;
    b -= c;
    cout << c << ' ' << int((a + b) / 2) << endl;
    return 0;
}

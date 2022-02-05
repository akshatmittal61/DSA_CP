#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t, a, b;
    cin >> t;
    while (t--)
    {
        cin >> a >> b;
        cout << (b - (a % b)) % b;
        cout << endl;
    }
    return 0;
}

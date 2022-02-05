#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int n;
    string s;
    bool check[26] = {false}, k = true;
    cin >> n >> s;
    for (int i = 0; i < n; ++i)
    {
        if (int(s[i]) >= 65 && int(s[i]) <= 90)
            check[int(s[i]) - 65] = true;
        else
            check[int(s[i]) - 97] = true;
    }
    for (int i = 0; i < 26; ++i)
    {
        if (!check[i])
        {
            k = false;
            break;
        }
    }
    if (k)
        cout << "YES";
    else
        cout << "NO";
    cout << endl;
    return 0;
}

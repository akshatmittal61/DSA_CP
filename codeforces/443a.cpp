#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string s = "", t;
    do
    {
        cin >> t;
        s.append(t);
        if (t[t.length() - 1] != '}')
            s.append(" ");
    } while (t[t.length() - 1] != '}');

    if (s.length() < 3)
        cout << 0;
    else
    {
        int n = s.length() / 3;
        int a[n], k = 0;
        for (int i = 0; i < n; ++i)
            a[i] = s[3 * i + 1];
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (a[i] == a[j])
                {
                    --i;
                    for (int l = j; l < n; ++l)
                        a[l] = a[l + 1];
                    a[n] = 0;
                    --n;
                }
            }
        }
        cout << n;
    }
    cout << endl;
    return 0;
}

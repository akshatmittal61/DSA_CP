#include <bits/stdc++.h>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define fl(i, n) for (int i = 0; i < n; i++)
using namespace std;

// Pattern

/*

5 5 5 5 5 4 4 4 4 4 3 3 3 3 3 2 2 2 2 2 1 1 1 1 1
     5 5 5 5 4 4 4 4 3 3 3 3 2 2 2 2 1 1 1 1
          5 5 5 4 4 4 3 3 3 2 2 2 1 1 1
               5 5 4 4 3 3 2 2 1 1
                    5 4 3 2 1

*/

void pattern(int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int s = 0; s < i * n; ++s)
            cout << " ";
        for (int j = 0; j < n; ++j)
        {
            for (int k = 0; k < n - i; ++k)
                cout << n - j << ' ';
        }
        cout << endl;
    }
}

int main()
{
    _ fs
        ll n = 5;
    cin >> n;
    pattern(n);
    return 0;
}
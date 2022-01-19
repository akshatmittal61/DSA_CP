#include <bits/stdc++.h>
using namespace std;

void swapRow(int a[5][5], int p, int q)
{
    for (int i = 0; i < 5; ++i)
        swap(a[p][i], a[q][i]);
}
void swapCol(int a[5][5], int p, int q)
{
    for (int i = 0; i < 5; ++i)
        swap(a[i][p], a[i][q]);
}
int scan(int a[5][5])
{
    int m = 0, n = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            if (a[i][j] == 1)
                m = i, n = j;
    return (m * 10 + n);
}

int main()
{
    int a[5][5], m = 0, n = 0, k = 0;
    for (int i = 0; i < 5; ++i)
        for (int j = 0; j < 5; ++j)
            cin >> a[i][j];
    m = scan(a) / 10;
    n = scan(a) % 10;
    while (m != 2)
    {
        if (m > 2)
            swapRow(a, m, m - 1);
        else
            swapRow(a, m, m + 1);
        m = scan(a) / 10;
        n = scan(a) % 10;
        ++k;
    }
    while (n != 2)
    {
        if (n > 2)
            swapCol(a, n, n - 1);
        else
            swapCol(a, n, n + 1);
        m = scan(a) / 10;
        n = scan(a) % 10;
        ++k;
    }
    cout << k << endl;
    return 0;
}
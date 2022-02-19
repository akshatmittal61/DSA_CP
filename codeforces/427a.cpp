#include <bits/stdc++.h>
using namespace std;

int prefix_sum(int a[], int p)
{
    int s = 0;
    for (int i = 0; i <= p; ++i)
        s += a[i];
    return s;
}
void del_item(int a[], int p, int n)
{
    for (int i = p; i < n; ++i)
        a[i] = a[i + 1];
}

int main()
{
    int n;
    cin >> n;
    int a[n], k = 0;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    int off = 0;
    for (int i = 0; i < n; ++i)
    {
        if (a[i] != -1)
            off += a[i];
        else if (off == 0)
        {
            ++k;
            continue;
        }
        else
        {
            --off;
        }
    }
    cout << k << endl;
    return 0;
}

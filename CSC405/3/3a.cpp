#include <iostream>
using namespace std;
int freq(int a[], int n, int s)
{
    int k = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] == s)
            ++k;
    return k;
}
bool includes(int a[], int n, int s)
{
    for (int i = 0; i < n; ++i)
        if (a[i] == s)
            return true;
    return false;
}
int main()
{
    int a[] = {2, 6, 4, 1, 4, 1, 6, 8, 7, 2, 8, 4, 5, 1, 5, 4, 2, 6, 4, 2}, b[100];
    int n = 20, j = 0;
    for (int i = 0; i < n; ++i)
        if (!includes(b, n, a[i]))
            b[j++] = a[i];
    for (int i = 0; i < j; ++i)
        if (freq(a, n, b[i]) % 2 != 0)
            cout << ' ' << b[i] << " occurs " << freq(a, n, b[i]) << " times" << endl;
    return 0;
}
// Akshat Mittal
// 20107
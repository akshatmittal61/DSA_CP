#include <bits/stdc++.h>
using namespace std;

int sum(int *a, int n)
{
    int s = 0;
    for (int i = 0; i < n; ++i)
        s += *(a + i);
    return s;
}

int main()
{
    int a[5] = {2, 6, 4, 8, 3};
    cout << sum(a, 5) << endl;
    cout << sum(a + 2, 3) << endl;
    return 0;
}

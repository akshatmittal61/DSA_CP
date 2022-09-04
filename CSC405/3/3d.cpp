#include <iostream>
using namespace std;
void traverse(string title, int a[], int n)
{
    cout << " " << title << " : ";
    for (int i = 0; i < n; ++i)
        cout << a[i] << ' ';
    cout << endl;
}
int main()
{
    int a[] = {2, 6, 4, 1, 4, 1, 6, 8, 7, 2, 8, 4, 5, 1, 5, 4, 2, 6, 4, 2}, n = 20;
    traverse("Original Array", a, n);
    for (int i = 0; i < n; ++i)
    {
        int k = i;
        for (int j = i; j < n; ++j)
            if (a[k] > a[j])
                k = j;
        swap(a[i], a[k]);
    }
    traverse("Ascending order", a, n);
    for (int i = 0; i < n; ++i)
    {
        int k = i;
        for (int j = i; j < n; ++j)
            if (a[k] < a[j])
                k = j;
        swap(a[i], a[k]);
    }
    traverse("Descending order", a, n);
    return 0;
}
// Akshat Mittal
// 20107
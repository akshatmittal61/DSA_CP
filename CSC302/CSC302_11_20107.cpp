#include <iostream>
using namespace std;
void selection_sort(int a[], int n)
{
    int i, j, small, pos;
    for (j = 0; j < n; ++j)
    {
        small = a[j];
        for (i = j; i < n; ++i)
        {
            if (a[i] < small)
            {
                small = a[i];
                pos = i;
            }
            if (a[j] > small)
                swap(a[j], a[pos]);
        }
    }
}
void traverse(int a[], int n)
{
    cout << "\n\n";
    for (int i = 0; i < n; ++i)
    {
        cout << ' ' << a[i] << ' ';
    }
    cout << "\n\n";
}
int main()
{
    cout << "\n\n\n";
    int a[] = {34, 52, 15, 24, 12, 3};
    cout << "\n The Array before sorting: ";
    traverse(a, 6);
    selection_sort(a, 6);
    cout << "\n The Array after sorting: ";
    traverse(a, 6);
    cout << "\n\n\n";
    return 0;
}
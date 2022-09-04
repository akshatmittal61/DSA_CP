#include <iostream>
using namespace std;
int main()
{
    int a[100], even[100], odd[100], n, k = 0, l = 0;
    cout << " Enter the number of elements: ";
    cin >> n;
    cout << " Enter " << n << " elements: ";
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
        if (a[i] % 2 == 0)
            even[k++] = a[i];
        else
            odd[l++] = a[i];
    }
    cout << "\n Even numbers: ";
    for (int i = 0; i < k; ++i)
        cout << even[i] << ' ';
    cout << "\n Odd numbers: ";
    for (int i = 0; i < l; ++i)
        cout << odd[i] << ' ';
    return 0;
}
// Akshat Mittal
// 20107
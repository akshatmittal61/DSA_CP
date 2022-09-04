#include <iostream>
using namespace std;
template <typename T>
T Sum(T arr[], int n)
{
    T s = 0;
    for (int i = 0; i < n; i++)
        s += arr[i];
    return s;
}
int main()
{
    int data[] = {2, 4, 6, 8, 10};
    cout << Sum(data, 5);
    return 0;
}
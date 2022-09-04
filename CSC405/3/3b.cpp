#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int *t;
    t = a;
    a = b;
    b = t;
}
int main()
{
    int a = 5, b = 7;
    cout << "\n Before Swap: \n";
    cout << " a = " << a << ", b = " << b << endl;
    swap(a, b);
    cout << "\n After Swap: \n";
    cout << " a = " << a << ", b = " << b << endl;
    return 0;
}
// Akshat Mittal
// 20107
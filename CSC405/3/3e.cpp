#include <iostream>
using namespace std;
inline int Greater(int a, int b)
{
    return a > b ? a : b;
}
int main()
{
    int a = 5, b = 7;
    cout << " Greater among " << a << " and " << b << " is ";
    cout << Greater(a, b);
    return 0;
}
// Akshat Mittal
// 20107
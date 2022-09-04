#include <iostream>
using namespace std;
template <typename A>
A Max(A x, A y)
{
    return x > y ? x : y;
}
int main()
{
    cout << Max(2, 4) << endl;
    cout << Max(2.5, 4.8) << endl;
    cout << Max('a', 'z') << endl;
    return 0;
}
#include <iostream>
using namespace std;
int main()
{
    int *a = new int(5);
    cout << " Memory allocated" << endl;
    cout << " Value of a = " << *a << endl;
    cout << endl;
    delete (a);
    cout << " Allocated memory block is freed!" << endl;
    return 0;
}
// Akshat Mittal
// 20107
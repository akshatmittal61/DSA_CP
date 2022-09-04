#include <iostream>
using namespace std;
int main()
{
    int c, f;
    cout << " Enter temp in celsius: ";
    cin >> c;
    cout << " Temp in fahrenheit: " << (1.8 * c) + 32 << endl;
    cout << " Enter temp in fahrenheit: ";
    cin >> f;
    cout << " Temp in celsisus: " << (f - 32) / 1.8;
    return 0;
}
// Akshat Mittal
// 20107
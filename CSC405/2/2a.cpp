#include <iostream>
using namespace std;
int main()
{
    int a, b, c, max;
    cout << "\n Enter 3 numbers: ";
    cin >> a >> b >> c;
    max = (a > b) ? (a > c ? a : c) : (b > c ? b : c);
    cout << " The greatest number is: " << max << endl;
    return 0;
}
// Akshat Mittal
// 20107
#include <iostream>
using namespace std;
int main()
{
    int n, m, s = 0;
    cout << " Enter the number: ";
    cin >> n;
    while (n != 0)
    {
        m = n % 10;
        s = (s * 10) + m;
        n /= 10;
    }
    cout << " The reverse of the number is: " << s;
    return 0;
}
// Akshat Mittal
// 20107
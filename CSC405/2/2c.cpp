#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    float a, b, c, D, x1, x2;
    cout << " Enter a, b, c from quadratic equation (ax^2+bx+c) : ";
    cin >> a >> b >> c;
    if (a == 0)
        cout << " a can't be zero.\n Try Again!";
    else
    {
        D = (b * b) - (4 * a * c);
        cout << " The roots for the equation (" << a << ")x^2 + (" << b << ")x + (" << c << ") are";
        if (D > 0)
        {
            cout << " real and distinct\n ";
            x1 = (-b + sqrt(D)) / (2 * a);
            x2 = (-b - sqrt(D)) / (2 * a);
            cout << x1 << "\t" << x2;
        }
        else if (D == 0)
        {
            cout << " real and equal to each other\n ";
            x1 = (-b) / (2 * a);
            cout << x1;
        }
        else
        {
            cout << " imaginary\n ";
            cout << "(" << -b << " + " << sqrt(-D) << "i)" << 2 * a << "\t";
            cout << "(" << -b << " - " << sqrt(-D) << "i)" << 2 * a << "\t";
        }
    }
    return 0;
}
// Akshat Mittal
// 20107
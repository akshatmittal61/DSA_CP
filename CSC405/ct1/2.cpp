// Akshat Mittal
// 20107
// Ques 2

#include <iostream>
using namespace std;

double up(double p, int q)
{
    double s = 1;
    for (int i = 1; i <= q; ++i)
        s *= p;
    return s;
}
double Up(double p, int q = 2)
{
    double s = 1;
    for (int i = 1; i <= q; ++i)
        s *= p;
    return s;
}

int main()
{
    double p;
    int q;
    cout << " Enter value of p: ";
    cin >> p;
    cout << " Enter value of q: ";
    cin >> q;
    cout << "\n p^2 = " << Up(p);
    cout << "\n p^q = " << up(p, q) << endl;
    return 0;
}
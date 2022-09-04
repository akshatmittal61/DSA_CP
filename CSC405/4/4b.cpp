#include <iostream>
using namespace std;
float SI(float p = 100, float r = 5, int t = 2)
{
    float si = (p * r * t) / 100;
    cout << " Simple interset of " << p;
    cout << " at rate " << r;
    cout << "% for " << t << " years: " << si << endl;
    return si;
}
int main()
{
    SI(500, 10, 5);
    SI(400, 8);
    SI(900);
    SI();
    return 0;
}
// Akshat Mittal
// 20107
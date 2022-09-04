#include <iostream>
using namespace std;
template <typename T>
T Square(T a) { return a * a; }
int main()
{
    cout << Square(2) << endl;
    cout << Square(2.5) << endl;
    return 0;
}
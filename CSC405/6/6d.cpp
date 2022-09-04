#include <iostream>
using namespace std;
class A
{
public:
    int x;
    void getX() { cin >> x; }
};
class B
{
public:
    int y;
    void getY() { cin >> y; }
};
class C : public A, public B
{
public:
    void sum() { cout << "\n Sum = " << x + y; }
};
int main()
{
    C obj;
    cout << " Enter values for x and y: ";
    obj.getX();
    obj.getY();
    obj.sum();
    return 0;
}
// Akshat Mittal
// 20107
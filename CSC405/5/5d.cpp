#include <iostream>
using namespace std;
class circle
{
    float r;

public:
    circle() { r = 0; }
    circle(float r) { this->r = r; }
    ~circle() { cout << "\n Area of circle: " << 3.14159 * r * r; }
};
class rectangle
{
    float l, b;

public:
    rectangle() { l = 0, b = 0; }
    rectangle(float l, float b) { this->l = l, this->b = b; }
    ~rectangle() { cout << "\n Area of rectangle: " << l * b; }
};
class cube
{
    float a;

public:
    cube() { a = 0; }
    cube(float a) { this->a = a; }
    ~cube() { cout << "\n Volume of cube: " << a * a * a; }
};
void run_code(float r, float l, float b, float a)
{
    circle c1(r);
    rectangle c2(l, b);
    cube c3(a);
    return;
}
int main()
{
    float r, l, b, a;
    cout << " Enter radius of circle: ";
    cin >> r;
    cout << " Enter length of rectangle: ";
    cin >> l;
    cout << " Enter breadth of rectangle: ";
    cin >> b;
    cout << " Enter side of cube: ";
    cin >> a;
    run_code(r, l, b, a);
    return 0;
}
// Akshat Mittal
// 20107
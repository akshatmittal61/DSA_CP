#include <iostream>
using namespace std;
class Shape
{
public:
    void area(int l, int b)
    {
        cout << "\n Area of rectangle: " << l * b;
    }
    void area(int a)
    {
        cout << "\n Area of square: " << a * a;
    }
};
int main()
{
    Shape a;
    a.area(3, 5);
    a.area(2);
    return 0;
}
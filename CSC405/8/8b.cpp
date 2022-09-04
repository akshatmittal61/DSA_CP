#include <iostream>
using namespace std;
class Rectangle
{
public:
    int length, breadth;
    Rectangle(int c, int d)
    {
        this->length = c;
        this->breadth = d;
    }
    void perimeter()
    {
        cout << "\n Perimeter: " << 2 * (length + breadth);
    }
    void area()
    {
        cout << "\n Area: " << length * breadth;
    }
};
class Square : public Rectangle
{
public:
    int side;
    Square(int s) : Rectangle(s, s){};
};
int main()
{
    Rectangle a(3, 5);
    Square b(2);
    a.perimeter();
    a.area();
    b.perimeter();
    b.area();
    return 0;
}
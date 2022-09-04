#include <iostream>
using namespace std;
class Shape
{
public:
    void print()
    {
        cout << "This is a shape" << endl;
    }
};
class Polygon : public Shape
{
public:
    void print()
    {
        cout << "This is a polygon" << endl;
    }
};
class Rectangle : public Polygon
{
public:
    void print()
    {
        cout << "Rectangle is a polygon" << endl;
    }
};
class Triangle : public Polygon
{
public:
    void print()
    {
        cout << "Triangle is a polygon" << endl;
    }
};
class Square : public Rectangle
{
public:
    void print()
    {
        cout << "Square is a Rectangle" << endl;
    }
};
int main()
{
    Shape S;
    Polygon p;
    Rectangle r;
    Triangle t;
    Square s;
    S.print();
    p.print();
    r.print();
    t.print();
    s.print();
    return 0;
}
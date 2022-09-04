#include <iostream>
using namespace std;
float area(int b, int h)
{ return 0.5 * b * h; }
float area(int r)
{ return 3.14159 * r * r; }
int main()
{
    int n;
    char ch;
    cout << " Find the area" << endl;
    cout << " 1. Triangle" << endl;
    cout << " 2. Circle" << endl;
    do
    {
        cout << "\n Enter index of shape: ";
        cin >> n;
        switch (n)
        {
        case 1:
            int b, h;
            cout << " Enter breadth: ";
            cin >> b;
            cout << " Enter height: ";
            cin >> h;
            cout << " Area of triangle: " << area(b, h);
            break;
        case 2:
            int r;
            cout << " Enter radius: ";
            cin >> r;
            cout << " Area of circle: " << area(r);
            break;
        default:
            cout << " Wrong choice!";
            break;
        }
        cout << "\n Again? (y / Y) ";
        cin >> ch;
    } while (ch == 'y' || ch == 'Y');
    return 0;
}
// Akshat Mittal
// 20107
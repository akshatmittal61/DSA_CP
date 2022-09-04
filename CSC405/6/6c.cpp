#include <iostream>
using namespace std;
class B
{
    int a;
public:
    int b;
    void get_ab() { cin >> a >> b; }
    int get_a() { return a; }
    void show_a() { cout << "\n a: " << a << endl; }
};
class D : private B
{
    int c;
public:
    void mul()
    {
        get_ab();
        c = b * get_a();
    }
    void display()
    {
        show_a();
        cout << "\n b = " << b << "\n";
        cout << "\n c = " << c << "\n";
    }
};
int main()
{
    D d;
    cout << " Enter values for a b: ";
    d.mul();
    d.display();
    return 0;
}
// Akshat Mittal
// 20107
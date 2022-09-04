#include <iostream>
using namespace std;
class complex
{
    int real;
    int imaginary;

public:
    complex() { real = 0, imaginary = 0; }
    complex(string s)
    {
        cout << "\n " << s << ": \n";
        cout << " Real: ";
        cin >> real;
        cout << " Imaginary: ";
        cin >> imaginary;
    }
    void add(complex a, complex b)
    {
        real = a.real + b.real;
        imaginary = a.imaginary + b.imaginary;
    }
    void output()
    {
        cout << "\n Real: " << real;
        cout << "\n Imaginary: " << imaginary;
    }
};
int main()
{
    complex a("Complex no. 1"), b("Complex no. 2");
    cout << "\n After adding a and b: ";
    complex c;
    c.add(a, b);
    c.output();
    return 0;
}
// Akshat Mittal
// 20107
#include <iostream>
using namespace std;
class Complex
{
    double real, imaginary;
public:
    static int num;
    Complex() { real = imaginary = 0; }
    Complex(double real1, double imaginary1) { real = real1, imaginary = imaginary1; }
    Complex operator+(Complex a)
    {
        Complex temp;
        temp.real = this->real + a.real;
        temp.imaginary = this->imaginary + a.imaginary;
        return temp;
    }
    Complex operator*(Complex a)
    {
        Complex temp;
        temp.real = (this->real * a.real) - (this->imaginary * a.imaginary);
        temp.imaginary = (this->imaginary * a.real) + (this->real * a.imaginary);
        return temp;
    }
    Complex operator/(Complex a)
    {
        Complex temp;
        temp.real = ((real * a.real) + (imaginary * a.imaginary)) / ((a.real * a.real) + (a.imaginary * a.imaginary));
        temp.imaginary = ((imaginary * a.real) + (real * a.imaginary)) / ((a.real * a.real) + (a.imaginary * a.imaginary));
        return temp;
    }
    friend Complex operator-(Complex a, Complex b)
    {
        Complex temp;
        temp.real = a.real - b.real;
        temp.imaginary = a.imaginary - b.imaginary;
        return temp;
    }
    void display(int k)
    {
        cout << endl;
        switch (k)
        {
        case 1:
            cout << " Addition: ";
            break;
        case 2:
            cout << " Subtraction: ";
            break;
        case 3:
            cout << " Multiplication: ";
            break;
        case 4:
            cout << " Division: ";
            break;
        default:
            cout << " Operand " << num << ": ";
            break;
        }
        cout << " " << this->real << " + " << this->imaginary << "i" << endl;
    }
};
int Complex::num;
int main()
{
    int a, b, c, d;
    Complex::num = 1;
    cout << "\n Enter value of operand 1: ";
    cin >> a >> b;
    Complex p(a, b);
    p.display(0);
    Complex::num++;
    cout << "\n Enter value of operand 2: ";
    cin >> c >> d;
    Complex q(c, d);
    q.display(0);
    Complex r;
    r = p + q;
    r.display(1);
    r = p - q;
    r.display(2);
    r = p * q;
    r.display(3);
    r = p / q;
    r.display(4);
    return 0;
}
// Akshat Mittal
// 20107
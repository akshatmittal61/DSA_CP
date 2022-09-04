#include <iostream>
using namespace std;
void swap(int *a, int *b) {
    int *t;
    t = a; a = b; b = t;
}
void swap(float *a, float *b) {
    float *t;
    t = a; a = b; b = t;
}
void swap(char *a, char *b) {
    char *t;
    t = a; a = b; b = t;
}
void display(string s, int a, int b, float c, float d, char e, char f) {
    cout << "\n " << s << ": \n";
    cout << " a = " << a << ", b = " << b << endl;
    cout << " c = " << c << ", d = " << d << endl;
    cout << " e = " << e << ", f = " << f << endl;
}
int main() {
    int a = 5, b = 7;
    float c = 10.5, d = 14.7;
    char e = 'A', f = 'B';
    display("Before Swap", a, b, c, d, e, f);
    swap(a, b); swap(c, d); swap(e, f);
    display("After Swap", a, b, c, d, e, f);
    return 0;
}
// Akshat Mittal
// 20107
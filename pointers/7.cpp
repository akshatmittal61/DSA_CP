#include <bits/stdc++.h>
using namespace std;

void inc1(int **p)
{
    p++;
}
void inc2(int **p)
{
    (*p)++;
}
void inc3(int **p)
{
    (**p)++;
}

int main()
{
    int a = 5;
    int *p = &a;
    int **q = &p;
    cout << &p << ' ' << q << endl;
    cout << &a << ' ' << p << ' ' << *q << endl;
    cout << a << ' ' << *p << ' ' << **q << endl;
    inc1(q);
    cout << q << endl;
    inc1(q);
    cout << *q << endl;
    inc1(q);
    cout << **q << endl;
    return 0;
}

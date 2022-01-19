#include <bits/stdc++.h>
using namespace std;

void print(int *p)
{
    cout << *p << endl;
}
void incrementVal(int *p)
{
    ++p;
}
void incrementRef(int *p)
{
    (*p)++;
}

int main()
{
    int a = 5;
    int *p = &a;
    print(p);
    cout << p << endl;
    incrementVal(p);
    cout << p << endl;
    incrementRef(p);
    cout << p << endl;
    print(p);
    return 0;
}

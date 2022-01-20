#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 65;
    char c = a;
    cout << c << endl;
    int *p = &a;
    char *pc = (char *)p;
    cout << *p << endl;
    cout << *pc << endl;
    cout << *(pc + 1) << endl;
    cout << *(pc + 2) << endl;
    cout << *(pc + 3) << endl;
    cout << p << endl;
    cout << pc << endl;
    return 0;
}

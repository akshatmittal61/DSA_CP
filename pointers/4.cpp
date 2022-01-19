#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {2, 6, 4};
    char c[] = "abc";
    cout << a << ' ' << c << endl;
    char *q = c;
    cout << q << endl;
    char c1 = 'a';
    char *q1 = &c1;
    cout << c1 << ' ' << &c1 << ' ' << q1 << endl;
    char str[] = "abcde";
    char *pstr = "abcde";
    cout << str << ' ' << pstr << endl;
    return 0;
}

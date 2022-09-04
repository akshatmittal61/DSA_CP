#include <iostream>
#include <cstdio>
#include <string.h>
using namespace std;
class String
{
    char str[20];

public:
    void getData() { cin >> str; }
    int operator==(String s)
    {
        if (!strcmp(str, s.str))
            return 1;
        return 0;
    }
};

int main()
{
    String s1, s2;
    cout << " Enter first string: ";
    s1.getData();
    cout << " Enter second string: ";
    s2.getData();
    if (s1 == s2)
        cout << " Strings are equal";
    else
        cout << " Strings are not equal";
    return 0;
}
// Akshat Mittal
// 20107
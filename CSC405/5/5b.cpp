#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << " Enter a string: ";
    cin >> s;
    if (s[0] >= 97 && s[0] <= 122)
        s[0] -= 32;
    cout << " New String: " << s;
    return 0;
}
// Akshat Mittal
// 20107
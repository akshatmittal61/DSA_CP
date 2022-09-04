#include <iostream>
using namespace std;
int main()
{
    string s = "", t;
    getline(cin, s);
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' ||
            s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            ++vowels;
        else if (s[i] >= '0' && s[i] <= '9')
            ++digits;
        else if (s[i] == ' ')
            ++spaces;
        else
            ++consonants;
    }
    cout << " Vowels: " << vowels << endl;
    cout << " Digits: " << digits << endl;
    cout << " Spaces: " << spaces << endl;
    cout << " Consonants: " << consonants << endl;
    return 0;
}
// Akshat Mittal
// 20107
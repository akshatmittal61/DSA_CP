#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio("10f.txt", ios::in | ios::out);
    fio << "Hello world 123";
    fio.seekg(0);
    int alpahabets = 0, digits = 0, spaces = 0;
    char c;
    while (fio.get(c))
    {
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
            ++alpahabets;
        else if (c >= '0' && c <= '9')
            ++digits;
        else if (c == ' ')
            ++spaces;
    }
    cout << " Alpahabets: " << alpahabets << endl;
    cout << " Digits: " << digits << endl;
    cout << " Spaces: " << spaces << endl;
    return 0;
}
// Akshat Mittal
// 20107
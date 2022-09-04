#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
int main()
{
    ifstream fio("10h.txt");
    char s[100], a[100];
    int c = 0;
    char d;
    // fio << "This is Akshat. Akshat is a developer. Akshat likes songs.";
    cout << "\n Enter a word: ";
    cin >> s;
    // fio.seekg(0);
    while (fio)
    {
        fio >> a;
        // cout << d << ' ';
        if (strcmp(a, s) == 0)
            ++c;
    }
    cout << "\n Occurences of " << s << ": " << c << endl;
    return 0;
}
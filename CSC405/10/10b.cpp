#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio("10b.txt", ios::out);
    int roll;
    string name;
    cin >> roll >> name;
    fio << roll << ' ' << name;
    fio.close();
    fio.open("10b.txt", ios::in);
    fio >> roll >> name;
    cout << "\n roll: " << roll;
    cout << "\n name: " << name;
    return 0;
}
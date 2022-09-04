#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio("10e.txt", ios::in | ios::out | ios::ate);
    fio << "Hello Akshat";
    fio.seekg(0, ios::beg);
    cout << fio.tellg() << endl;
    fio.seekg(5, ios::beg);
    cout << fio.tellg() << endl;
    fio.seekg(-5, ios::end);
    cout << fio.tellg() << endl;
    fio.seekp(5, ios::beg);
    cout << fio.tellp() << endl;
    fio.close();
    return 0;
}
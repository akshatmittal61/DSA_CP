#include <iostream>
#include <fstream>
using namespace std;
class student
{
public:
    int roll, marks;
    string name;
    void input()
    {
        cin >> roll >> name >> marks;
    }
    void output()
    {
        cout << roll << ' ' << name << ' ' << marks;
    }
};
int main()
{
    fstream fio("10d.txt", ios::out | ios::ate);
    student s;
    int i = 0;
    while (i < 2)
    {
        ++i;
        s.input();
        fio.write((char *)&s, sizeof(s));
    }
    fio.close();
    fio.open("10d.txt", ios::in);
    fio.read((char *)&s, sizeof(s));
    while (!fio.eof())
    {
        s.output();
        cout << endl;
        fio.read((char *)&s, sizeof(s));
    }
    fio.close();
    return 0;
}
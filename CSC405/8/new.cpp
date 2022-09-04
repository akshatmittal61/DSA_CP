#include <iostream>
#include <fstream>
using namespace std;
class Student
{
    int roll;
    string name;

public:
    Student()
    {
        this->roll = 0;
        this->name = "";
    }
    Student(int a, string b)
    {
        this->roll = a;
        this->name = b;
    }
    void traverse()
    {
        cout << "\n Roll: " << roll;
        cout << "\n Name: " << name;
    }
};
int main()
{
    Student me(20107, "Akshat Mittal");
    fstream fio("details.txt", ios::out);
    fio.write((char *)&me, sizeof(Student));
    fio.close();
    fio.open("details.txt", ios::in);
    Student test;
    fio.read((char *)&test, sizeof(Student));
    while (!fio.eof())
    {
        test.traverse();
        fio.read((char *)&test, sizeof(Student));
    }
    fio.close();
    return 0;
}
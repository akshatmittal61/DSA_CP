#include <iostream>
using namespace std;
class student
{
    int roll;
    string name;

public:
    student()
    {
        roll = 0;
        name = "";
    }
    student(int a, string s)
    {
        this->roll = a;
        this->name = s;
    }
    student(student *a)
    {
        this->roll = a->roll;
        this->name = a->name;
    }
    void display(string s)
    {
        cout << "\n " << s;
        cout << "\n Name: " << this->name;
        cout << "\n Roll No.: " << this->roll;
    }
};
int main()
{
    int a;
    string s;
    cout << " Roll No.: ";
    cin >> a;
    cout << " Name: ";
    cin >> s;
    student newStudent(a, s);
    newStudent.display("1st student: ");
    student copyStudent(newStudent);
    copyStudent.display("\n Copied student: ");
    return 0;
}
// Akshat Mittal
// 20107
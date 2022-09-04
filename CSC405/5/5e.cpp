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
    cout << "\n Roll No.: ";
    cin >> a;
    cout << "\n Name: ";
    cin >> s;
    student newStudent(a, s);
    newStudent.display("\n Student: ");
    return 0;
}
// Akshat Mittal
// 20107
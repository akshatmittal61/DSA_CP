#include <iostream>
using namespace std;
class Student
{
    int id;
    char name[20];
public:
    void getData() { cin >> id >> name; }
};
class marks : public Student
{
protected:
    int p, c, m;
public:
    void getMarks() { cin >> p >> c >> m; }
};
class sports
{
protected:
    int spMarks;
public:
    void getSports() { cin >> spMarks; }
};
class result : public marks, public sports
{
    int total;
    float average;
public:
    void show()
    {
        total = p + c + m;
        average = total / 3;
        cout << "\n Total = " << total << endl;
        cout << "\n Average = " << average << endl;
        cout << "\n Average + Sports Marks = " << average + spMarks << endl;
    }
};
int main()
{
    result a;
    cout << "\n Enter Student details: ";
    a.getData();
    cout << "\n Enter Marks of 3 subjects: ";
    a.getMarks();
    cout << "\n Enter Sports Marks: ";
    a.getSports();
    a.show();
    return 0;
}
// Akshat Mittal
// 20107
#include <iostream>
using namespace std;
class Employee
{
    string name;
    int yearOfJoining;
    float salary;
    string address;
public:
    Employee(string name, int yearOfJoining, float salary, string address)
    {
        this->name = name;
        this->yearOfJoining = yearOfJoining;
        this->salary = salary;
        this->address = address;
    }
    void traverse()
    {
        cout << this->name << "\t\t" << this->yearOfJoining << "\t\t\t" << this->address << endl;
    }
};
int main()
{
    cout << "\n\n\n";
    Employee a("Robert", 1994, 50000, "64C-NYK");
    Employee b("Sam", 2000, 75000, "68D-WDC");
    Employee c("John", 1999, 98400, "26B-HYC");
    cout << "\nName\t\tYear Of Joining\t\tAddress\n\n";
    a.traverse();
    b.traverse();
    c.traverse();
    cout << "\n\n\n";
    return 0;
}
#include <iostream>
#include <fstream>
using namespace std;
class emp
{
public:
    string name;
    void input()
    {
        cin >> name;
    }
    void output()
    {
        cout << name;
    }
};
int main()
{
    fstream fio("10c.txt", ios::out | ios::ate);
    emp e;
    e.input();
    fio.write((char *)&e, sizeof(e));
    fio.close();
    fio.open("10c.txt", ios::in);
    fio.read((char *)&e, sizeof(e));
    e.output();
    fio.close();
    return 0;
}
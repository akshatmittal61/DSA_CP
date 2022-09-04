#include <iostream>
using namespace std;
class base
{
public:
    int x;
    void getData() { cin >> x; }
};
class derive1 : public base
{
public:
    int y;
    void readData() { cin >> y; }
};
class derive2 : public derive1
{
    int z;

public:
    void inData() { cin >> z; }
    void product() { cout << "\n Product = " << x * y * z; }
};
int main()
{
    derive2 a;
    cout << "\n Enter x: ";
    a.getData();
    cout << "\n Enter y: ";
    a.readData();
    cout << "\n Enter z: ";
    a.inData();
    a.product();
    return 0;
}
// Akshat Mittal
// 20107
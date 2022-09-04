#include <iostream>
using namespace std;
class Numbers
{
    int a, b, c;

public:
    void getNum()
    {
        cin >> a >> b >> c;
    }
    int check()
    {
        if (a > b)
            return a > c ? a : c;
        else
            return b > c ? b : c;
    }
} Obj;
int main()
{
    Obj.getNum();
    cout << " Greatest among the above numbers: " << Obj.check();
    return 0;
}
// Akshat Mittal
// 20107
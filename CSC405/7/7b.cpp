#include <iostream>
using namespace std;
class AddAmount
{
    int amount;

public:
    AddAmount()
    {
        this->amount = 50;
    }
    AddAmount(int newAm)
    {
        this->amount = 50 + newAm;
    }
    void display(string a)
    {
        cout << "\n Amount in " << a << ": " << this->amount;
    }
};
int main()
{
    cout << "\n\n\n";
    AddAmount a;
    AddAmount b(75);
    a.display("a");
    b.display("b");
    cout << "\n\n\n";
    return 0;
}
#include <iostream>
using namespace std;
template <typename T>
class B
{
public:
    B()
    {
        cout << "base ()" << endl;
    }
    ~B()
    {
        cout << "base ~" << endl;
    }
};
class D : public B<int>
{
public:
    D()
    {
        cout << "Derived ()" << endl;
    }
    ~D()
    {
        cout << "Derived ~" << endl;
    }
};
int main()
{
    D a;
    return 0;
}
#include <iostream>
using namespace std;
class fruit
{
public:
    int n;
    string s;
    fruit(string s, int n)
    {
        for (int i = 0; i < n; i++)
        {
            this->s[i] = s[i];
        }
    }
};
class mango : public fruit
{
public:
    mango(string s) : fruit(s, s.length()){};
    void count()
    {
        int mangoes = 0;
        for (int i = 0; i < n; i++)
            if (s[i] == 'm')
                ++mangoes;
        cout << "\n No. of mangoes: " << mangoes << endl;
    }
};
class apple : public fruit
{
public:
    apple(string s) : fruit(s, s.length()){};
    void count()
    {
        int apples = 0;
        cout << s << endl;
        for (int i = 0; i < n; i++)
            if (s[i] == 'a')
                ++apples;
        cout << "\n No. of apples: " << apples << endl;
    }
};
int main()
{
    int n = 5;
    string fruits = "aamamaama";
    fruit f(fruits, n);
    apple a(fruits);
    mango m(fruits);
    a.count();
    m.count();
    return 0;
}
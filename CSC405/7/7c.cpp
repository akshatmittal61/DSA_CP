#include <iostream>
using namespace std;
class Bank
{
public:
    float balance;
    Bank() { balance = 0; }
    Bank(float balance) { this->balance = balance; }
    float getBalance() { return balance; }
};
class BankA : public Bank
{
public:
    BankA(float a) { balance = a; }
};
class BankB : public Bank
{
public:
    BankB(float b) { balance = b; }
};
class BankC : public Bank
{
public:
    BankC(float c) { balance = c; }
};
int main()
{
    cout << "\n\n\n";
    BankA a(1000);
    BankA b(1500);
    BankA c(2000);
    cout << "\n Balance in bank a: " << a.getBalance();
    cout << "\n Balance in bank b: " << b.getBalance();
    cout << "\n Balance in bank c: " << c.getBalance();
    cout << "\n\n\n";
    return 0;
}
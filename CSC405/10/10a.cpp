#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio("10a.txt",ios::out);
    string username, password;
    cin >> username >> password;
    fio << username << ' ' << password;
    fio.close();
    return 0;
}
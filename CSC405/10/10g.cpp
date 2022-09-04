#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream fio;
    int n, b;
    string a;
    char c;
    cout << "\n 1. Add";
    cout << "\n 2. Append";
    cout << "\n 3. Modify";
    cout << "\n 4. Display";
    cout << "\n Enter a choice: ";
    cin >> n;
    switch (n)
    {
    case 1:
        fio.open("10g.txt", ios::out | ios::ate);
        cin >> a;
        fio << a;
        fio.close();
        break;
    case 2:
        fio.open("10g.txt", ios::app);
        cin >> a;
        fio << a;
        fio.close();
        break;
    case 3:
        fio.open("10g.txt", ios::in | ios::out);
        cout << "\n Position and text ";
        cin >> b;
        fio.seekp(b, ios::beg);
        cin >> c;
        fio.put(c);
        fio.close();
        break;
    case 4:
        fio.open("10g.txt", ios::in);
        while (fio.get(c))
            cout << c;
        fio.close();
        break;
    default:
        cout << "Wrong Choice";
        break;
    }
    return 0;
}
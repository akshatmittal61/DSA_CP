#include <iostream>
#include <set>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

void print(set<int> s)
{
    cout << "\n Elements: ";
    for (int i : s)
        cout << i << ' ';
}

int main()
{
    cout << "\n\n";
    set<int> s; // initialize set
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(1);
    s.insert(5);
    s.insert(1);
    s.insert(0);
    s.insert(0);
    s.insert(0);
    print(s);
    cout << "\n size: " << s.size();
    cout << "\n Empty or not: " << s.empty();
    s.erase(s.begin());
    print(s);
    cout<<"\n find 0";
    s.find(5);
    cout << "\n\n";
    return 0;
}
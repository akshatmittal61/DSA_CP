#include <iostream>
#include <list>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

void print(list<int> l, string s = "Elements")
{
    cout << "\n " << s << ": ";
    for (int i : l)
        cout << i << ' ';
}

int main()
{
    cout << "\n\n";
    list<int> l;
    l.push_back(1);
    l.push_front(2);
    print(l);
    l.pop_back();
    print(l, "After pop_back");
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    print(l);
    cout << "\n Empty or not: " << l.empty();
    cout << "\n Element at front: " << l.front();
    cout << "\n Element at back: " << l.back();
    list<int> newl(l);
    print(newl);
    list<int> nl(3, 12);
    print(nl);
    cout << "\n\n";
    return 0;
}
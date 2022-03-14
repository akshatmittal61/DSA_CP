#include <iostream>
#include <list>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

void print(list<int> l)
{
    cout << "\n Elements: ";
    for (int i : l)
        cout << i << ' ';
}

int main()
{
    cout << "\n\n";
    list<int> l; // initialize list
    l.push_back(1);
    l.push_front(2);
    print(l);
    l.pop_back();
    print(l);
    l.push_front(3);
    l.push_front(4);
    l.push_front(5);
    print(l);
    // cout << "\n Element at 2nd index: " << l.at(2);
    cout << "\n Empty or not: " << l.empty();
    cout << "\n Element at front: " << l.front();
    cout << "\n Element at back: " << l.back();
    list<int> newl(l);
    print(newl);
    list<int> nl(5, 12);
    print(nl);
    cout << "\n\n";
    return 0;
}
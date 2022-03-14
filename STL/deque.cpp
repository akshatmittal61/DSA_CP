#include <iostream>
#include <deque>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

void print(deque<int> d)
{
    cout << "\n Elements: ";
    for (int i : d)
    {
        cout << i << ' ';
    }
}

int main()
{
    cout << "\n\n";
    deque<int> d; // initialize deque
    d.push_back(1);
    d.push_front(2);
    print(d);
    d.pop_back();
    print(d);
    d.push_front(3);
    d.push_front(4);
    d.push_front(5);
    print(d);
    cout << "\n Element at 2nd index: " << d.at(2);
    cout << "\n Empty or not: " << d.empty();
    cout << "\n Element at front: " << d.front();
    cout << "\n Element at back: " << d.back();
    d.erase(d.begin(), d.begin() + 1);
    print(d);
    cout << "\n\n";
    return 0;
}
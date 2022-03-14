#include <iostream>
#include <vector>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    cout << "\n\n";
    vector<int> v; // initialize vector
    cout << "\n Size: " << v.size() << ' ' << v.capacity();
    v.push_back(1);
    cout << "\n Size: " << v.size() << ' ' << v.capacity();
    v.push_back(2);
    cout << "\n Size: " << v.size() << ' ' << v.capacity();
    v.push_back(3);
    cout << "\n Size: " << v.size() << ' ' << v.capacity();
    v.push_back(4);
    cout << "\n Size: " << v.size() << ' ' << v.capacity();
    for (int i : v)
        cout << i << ' ';
    cout << "\n Element at 2nd index: " << v.at(2);
    cout << "\n Empty or not: " << v.empty();
    cout << "\n Element at front: " << v.front();
    cout << "\n Element at back: " << v.back();
    v.pop_back();
    cout << "\n Elements: ";
    for (int i : v)
        cout << i << ' ';
    v.empty();
    cout << "\n Elements: ";
    for (int i : v)
        cout << i << ' ';

    vector<int> a(5, 1);
    cout << "\n Elements: ";
    for (int i : a)
        cout << i << ' ';
    cout << "\n\n";
    return 0;
}
#include <iostream>
#include <array>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    cout << "\n\n";
    array<int, 4> a = {1, 2, 3, 4}; // initialize array
    fl(i, 4) cout << a[i] << ' ';
    cout << "\n Element at 2nd index: " << a.at(2);
    cout << "\n Empty or not: " << a.empty();
    cout << "\n Element at front: " << a.front();
    cout << "\n Element at back: " << a.back();
    cout << "\n\n";
    return 0;
}
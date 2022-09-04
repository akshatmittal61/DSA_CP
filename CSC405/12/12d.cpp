#include <iostream>
#include <array>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    cout << "\n\n";
    array<int, 4> a = {1, 2, 3, 4};
    cout << "\n Elements: ";
    fl(i, 4) cout << a[i] << ' ';
    cout << "\n At 2nd index: " << a.at(2);
    cout << "\n Empty or not: " << a.empty();
    cout << "\n At front: " << a.front();
    cout << "\n At back: " << a.back();
    cout << "\n\n";
    return 0;
}
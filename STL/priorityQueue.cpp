#include <iostream>
#include <queue>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    cout << "\n\n";
    priority_queue<int> maxh; // initialize priority queue
    priority_queue<int> minh; // initialize priority queue
    maxh.push(1);
    maxh.push(3);
    maxh.push(2);
    maxh.push(0);
    int n = maxh.size();
    cout << "\n Elements: ";
    fl(i, n)
    {
        cout << maxh.top() << ' ';
        maxh.pop();
    }
    cout << "\n size: " << maxh.size();
    cout << "\n Empty or not: " << maxh.empty();

    cout << "\n Elements: ";
    minh.push(5);
    minh.push(1);
    minh.push(0);
    minh.push(4);
    minh.push(3);
    int m = minh.size();
    fl(i, m)
    {
        cout << minh.top() << ' ';
        minh.pop();
    }
    cout << "\n\n";
    return 0;
}
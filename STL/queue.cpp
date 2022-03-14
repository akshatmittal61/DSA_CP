#include <iostream>
#include <queue>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    cout << "\n\n";
    queue<string> q; // initialize stack
    q.push("Arcane");
    q.push("Akshat");
    q.push("Mittal");
    cout << "\n 1st element: " << q.front();
    q.pop();
    cout << "\n 1st element: " << q.front();
    cout << "\n size: " << q.size();
    cout << "\n Empty or not: " << q.empty();
    cout << "\n\n";
    return 0;
}
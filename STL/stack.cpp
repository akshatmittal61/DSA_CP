#include <iostream>
#include <stack>
#define fl(i, n) for (int i = 0; i < n; ++i)
using namespace std;

int main()
{
    cout << "\n\n";
    stack<string> s; // initialize stack
    s.push("Arcane");
    s.push("Akshat");
    s.push("Mittal");
    cout << "\n top: " << s.top();
    s.pop();
    cout << "\n top: " << s.top();
    cout << "\n size: " << s.size();
    cout << "\n Empty or not: " << s.empty();
    cout << "\n\n";
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> v, string s = "Elements")
{
    cout << "\n " << s << ": ";
    for (int i : v)
        cout << i << ' ';
}
int main()
{
    cout << "\n\n";
    vector<int> v;
    cout << "\n Initially\n Size : " << v.size() << " Capacity: " << v.capacity();
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    cout << "\n Finally\n Size: " << v.size() << " Capacity: " << v.capacity();
    print(v);
    cout << "\n Element at 2nd index: " << v.at(2);
    cout << "\n Empty or not: " << v.empty();
    cout << "\n Element at front: " << v.front();
    cout << "\n Element at back: " << v.back();
    v.pop_back();
    print(v, "After pop_back");
    v.clear();
    print(v, "After clear");
    vector<int> a(3, 1);
    print(a, "Elements of a");
    cout << "\n\n";
    return 0;
}
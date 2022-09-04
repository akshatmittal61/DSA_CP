#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "\n\n";
    vector<int> v;
    v.push_back(18);
    v.push_back(52);
    v.push_back(4);
    v.push_back(13);
    cout << "\n Elements before sort: ";
    for (int i : v)
        cout << i << ' ';
    sort(v.begin(), v.end());
    cout << "\n Elements after sort: ";
    for (int i : v)
        cout << i << ' ';
    cout << "\n\n";
    return 0;
}
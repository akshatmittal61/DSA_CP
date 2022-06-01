#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, k = 0;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> s;
        if (s == "Tetrahedron")
            k += 4;
        else if (s == "Cube")
            k += 6;
        else if (s == "Octahedron")
            k += 8;
        else if (s == "Dodecahedron")
            k += 12;
        else if (s == "Icosahedron")
            k += 20;
    }
    cout << k << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

void solve(int testNo)
{
    cout << "Case #" << testNo << ":\n";
    int r, c;
    cin >> r >> c;
    for (int i = 0; i < 2 * r + 1; i++)
    {
        for (int j = 0; j < 2 * c + 1; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 1 && j == 0))
            {
                cout << ".";
                continue;
            }
            if (i % 2 != 0 && j % 2 != 0)
                cout << ".";
            else
            {
                if (i % 2 == 0)
                {
                    if (j % 2 == 0)
                        cout << "+";
                    else
                        cout << "-";
                }
                else
                {
                    if (j % 2 == 0)
                        cout << "|";
                    else
                        cout << ".";
                }
            }
        }
        if (i < 2 * r)
            cout << endl;
    }
}

int main()
{
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; ++i)
    {
        solve(i);
        cout << endl;
    }
    return 0;
}
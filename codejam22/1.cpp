#include <iostream>
using namespace std;

void myCode(int testNo)
{
    cout << "Case #" << testNo + 1 << ":\n";
    int rows, columns;
    cin >> rows >> columns;
    for (int i = 0; i < 2 * rows + 1; i++)
    {
        for (int j = 0; j < 2 * columns + 1; j++)
        {
            if ((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 1 && j == 0))
            {
                cout << ".";
                continue;
            }
            if ((i % 2 == 0 || j % 2 == 0))
            {
                if ((i % 2 == 0) && (j % 2 == 0))
                    cout << "+";
                else if ((i % 2 == 0) && (j % 2 != 0))
                    cout << "-";
                else if ((i % 2 != 0) && (j % 2 == 0))
                    cout << "|";
                else if ((i % 2 != 0) && (j % 2 != 0))
                    cout << ".";
            }
            else
                cout << ".";
        }
        if (i < 2 * rows)
            cout << endl;
    }
    cout << endl;
}

int main()
{
    int testCases;
    cin >> testCases;
    for (int loopVar = 0; loopVar < testCases; ++loopVar)
        myCode(loopVar);
    return 0;
}
#include <iostream>
using namespace std;
#define MAX 1000000


void myCode(int tc)
{
    long long int a[3][4];
    for (int i = 1; i <= 3; i++)
        for (int j = 1; j <= 4; j++)
            cin >> a[i - 1][j - 1];
    cout << "Case #" << tc << ": ";
    long long int allMinimum[4], reqSum = 0;
    for (int i = 0; i < 4; i++)
        allMinimum[i] = min(min(a[0][i], a[1][i]), a[2][i]);
    for (int i = 0; i < 4; i++)
        reqSum += allMinimum[i];
    if (reqSum == MAX)
        cout << allMinimum[0] << " " << allMinimum[1] << " " << allMinimum[2] << " " << allMinimum[3] << " ";
    else if (reqSum < MAX)
        cout << "IMPOSSIBLE";
    else
    {
        while (reqSum > MAX)
        {
            if (allMinimum[0] > 0)
                --allMinimum[0];
            if (allMinimum[1] > 0)
                --allMinimum[1];
            if (allMinimum[2] > 0)
                --allMinimum[2];
            if (allMinimum[3] > 0)
                --allMinimum[3];
            reqSum = allMinimum[0] + allMinimum[1] + allMinimum[2] + allMinimum[3];
            for (int i = 0; i < MAX - reqSum; i++)
                ++allMinimum[i];
        }
        cout << allMinimum[0] << " " << allMinimum[1] << " " << allMinimum[2] << " " << allMinimum[3] << " ";
    }
    cout << endl;
}

int main()
{
    int test = 1;
    cin >> test;
    for (int i = 1; i <= test; ++i)
        myCode(i);
    return 0;
}
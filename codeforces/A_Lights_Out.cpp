#include <bits/stdc++.h>
#include <unordered_map>
#define _ ios_base::sync_with_stdio(0);
#define fs cin.tie(0);
#define ll long long int
#define pb push_back
#define fl(i, n) for (int i = 0; i < n; i++)
#define sortall(v) sort(v.begin(), v.end())
#define sortrev(v) sort(v.end(), v.begin())
using namespace std;

void solve()
{
    int m[3][3];
    bool lights[3][3] = {true};
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; ++j)
            cin >> m[i][j];
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; ++j)
            lights[i][j] = true;
    int a = 0, b = 3, c = 0, d = 3;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            if (m[i][j] % 2 != 0)
            {
                lights[i][j] = !lights[i][j];
                switch (i * 3 + j)
                {
                case 0:
                    lights[0][1] = !lights[0][1];
                    lights[1][0] = !lights[1][0];
                    break;
                case 1:
                    lights[0][0] = !lights[0][0];
                    lights[0][2] = !lights[0][2];
                    lights[1][1] = !lights[1][1];
                    break;
                case 2:
                    lights[0][1] = !lights[0][1];
                    lights[1][2] = !lights[1][2];
                    break;
                case 3:
                    lights[0][0] = !lights[0][0];
                    lights[1][1] = !lights[1][1];
                    lights[2][0] = !lights[2][0];
                    break;
                case 4:
                    lights[0][1] = !lights[0][1];
                    lights[1][0] = !lights[1][0];
                    lights[1][2] = !lights[1][2];
                    lights[2][1] = !lights[2][1];
                    break;
                case 5:
                    lights[0][2] = !lights[0][2];
                    lights[1][1] = !lights[1][1];
                    lights[2][2] = !lights[2][2];
                    break;
                case 6:
                    lights[1][0] = !lights[1][0];
                    lights[2][1] = !lights[2][1];
                    break;
                case 7:
                    lights[2][0] = !lights[2][0];
                    lights[1][1] = !lights[1][1];
                    lights[2][2] = !lights[2][2];
                    break;
                case 8:
                    lights[1][2] = !lights[1][2];
                    lights[2][1] = !lights[2][1];
                    break;
                default:
                    break;
                }
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; ++j)
            cout << lights[i][j];
        cout << endl;
    }
}

int main()
{
    _ fs
    solve();
    return 0;
}
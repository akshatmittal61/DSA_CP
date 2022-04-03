#include <stdio.h>
#define LI long long int

LI min(LI a, LI b)
{
    return b < a ? b : a;
}


int main()
{
    int testCases;
    scanf("%d", &testCases);
    for (int testCase = 0; testCase < testCases; ++testCase)
    {
        LI a[3][4];
        for (int i = 0; i < 3; i++)
            for (int j = 0; j < 4; j++)
                scanf("%lld", &a[i][j]);
        printf("Case #%d: ", testCase + 1);
        LI mins[4], netSum = 0;
        for (int i = 0; i < 4; i++)
            mins[i] = min(min(a[0][i], a[1][i]), a[2][i]);
        for (int i = 0; i < 4; i++)
            netSum += mins[i];
        if (netSum == 1000000)
            for (int i = 0; i < 4; i++)
                printf("%lld ", mins[i]);
        else if (netSum < 1000000)
            printf("IMPOSSIBLE");
        else
        {
            while (netSum > 1000000)
            {
                if (mins[0] > 0)
                    --mins[0];
                if (mins[1] > 0)
                    --mins[1];
                if (mins[2] > 0)
                    --mins[2];
                if (mins[3] > 0)
                    --mins[3];
                netSum = 0;
                for (int i = 0; i < 4; i++)
                    netSum += mins[i];
                for (int i = 0; i < 1000000 - netSum; i++)
                    ++mins[i];
            }
            for (int i = 0; i < 4; i++)
                printf("%lld ", mins[i]);
        }
        printf("\n");
    }
    return 0;
} 
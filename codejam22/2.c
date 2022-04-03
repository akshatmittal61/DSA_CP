#include <stdio.h>
#define Limit 1000000

long long int min(long long int __a, long long int __b)
{
    if (__b < __a)
        return __b;
    return __a;
}

int main()
{
    int test = 1;
    scanf("%d", &test);
    for (int t = 1; t <= test; ++t)
    {
        long long int a[3][4];
        for (int i = 1; i <= 3; i++)
            for (int j = 1; j <= 4; j++)
                scanf("%lld", &a[i - 1][j - 1]);
        printf("Case #%d: ", t);
        long long int allMinimum[4], totalSum = 0;
        for (int i = 0; i < 4; i++)
        {
            allMinimum[i] = min(a[0][i], min(a[1][i], a[2][i]));
            // if (a[0][i] < a[1][i])
            // {
            //     if (a[0][i] < a[2][i])
            //         allMinimum[i] = a[0][i];
            //     else
            //         allMinimum[i] = a[2][i];
            // }
            // else
            // {
            //     if (a[1][i] < a[2][i])
            //         allMinimum[i] = a[1][i];
            //     else
            //         allMinimum[i] = a[2][i];
            // }
            // printf("%d ",allMinimum[i]);
            totalSum += allMinimum[i];
        }
        if (totalSum == Limit)
            for (int i = 0; i < 4; i++)
                printf("%lld ", allMinimum[i]);
        else if (totalSum < Limit)
            printf("IMPOSSIBLE");
        else
        {
            while (totalSum > Limit)
            {
                for (int i = 0; i < 4; i++)
                {
                    if (allMinimum[i] > 0)
                        --allMinimum[i];
                }
                totalSum = 0;
                for (int i = 0; i < 4; i++)
                    totalSum += allMinimum[i];
                for (int i = 0; i < Limit - totalSum; i++)
                    ++allMinimum[i];
            }
            for (int i = 0; i < 4; i++)
                printf("%lld ", allMinimum[i]);
        }
        printf("\n");
    }
    return 0;
}
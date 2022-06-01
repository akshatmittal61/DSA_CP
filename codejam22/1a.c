#include <stdio.h>

int main()
{
    int tC;
    scanf("%d", &tC);
    for (int k = 1; k <= tC; ++k)
    {
        printf("Case #%d:\n", k);
        int m, n;
        scanf("%d", &m);
        scanf("%d", &n);
        for (int i = 0; i < 2 * m + 1; i++)
        {
            for (int j = 0; j < 2 * n + 1; j++)
            {
                if ((i == 0 && j == 0) || (i == 0 && j == 1) || (i == 1 && j == 0))
                    printf(".");
                else if ((i % 2 == 0 || j % 2 == 0))
                {
                    if ((i % 2 == 0) && (j % 2 == 0))
                        printf("+");
                    else if ((i % 2 == 0) && (j % 2 != 0))
                        printf("-");
                    else if ((i % 2 != 0) && (j % 2 == 0))
                        printf("|");
                    else if ((i % 2 != 0) && (j % 2 != 0))
                        printf(".");
                }
                else
                    printf(".");
            }
            if (i < 2 * m)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
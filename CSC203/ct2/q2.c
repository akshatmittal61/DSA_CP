#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int m, s[5], i, j,sum=0;
    char a[5][5];
    for (j = 0; j < 5; ++j)
    {
        s[j] = 0;
        scanf("%s", a[j]);
        for (i = 0; a[j][i] != '\0'; ++i)
        {
            m = (int)a[j][i] - 48;
            s[j] = (s[j] * 10) + m;
        }
        sum+=(s[j]*s[j]);
    }
    printf("%d", sum);
    printf("\n\n\n");
    return 0;
}
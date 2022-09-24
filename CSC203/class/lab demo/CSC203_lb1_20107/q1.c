#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char a;
    int i = 1, n;
    printf("How many dollar signs: ");
    scanf("%d", &n);
    while (i <= n)
    {
        printf(" $ ");
        if (i % 50 == 0)
            printf("\n");
        ++i;
    }
    printf("\n\n\n");
}
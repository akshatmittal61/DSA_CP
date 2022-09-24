#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int m, n;
    printf("Enter m: ");
    scanf("%d", &m);
    if (m == 0)
        n = 0;
    else if (m > 0)
        n = 1;
    else
        n = -1;
    printf("value of n: %d", n);
    printf("\n\n\n");
    return 0;
}
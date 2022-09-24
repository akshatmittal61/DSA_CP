#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10] = {23, 12, 15, 18, 9, 10, 6, 45, 55, 25}, i, j = 0, b[10];
    for (i = 0; i < 10; i++)
    {
        if (a[i] % 9 == 0)
            b[j++] = a[i]; //if a[i] is divisible by 9 add it to arrab b
    }
    for (i = 0; i < j; i++)
    {
        printf("%d ", b[i]); //print the array b
    }
    printf("\n\n\n");
    return 0;
}
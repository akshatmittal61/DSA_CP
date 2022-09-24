#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int num, f[10], i = 0, j,a;
    printf("Enter the number in decimal format: ");
    scanf("%d",&num);
    a=num;
    while (num != 0)
    {
        f[i] = num % 2;
        ++i;
        num /= 2;
    }
    printf("Binary equivalent of %d is ",a);
    for (j = i - 1; j >= 0; --j)
        printf("%d",f[j]);
    printf("\n\n\n");
    return 0;
}
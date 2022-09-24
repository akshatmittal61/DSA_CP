#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int n,i=1,s=1;
    printf("Please enter the number to get its factorial: ");
    scanf("%d",&n);
    for (int i = 1; i <= n; i++)
        s*=i;
    printf("Factorial of %d is %d",n,s);
    printf("\n\n\n");
    return 0;
}
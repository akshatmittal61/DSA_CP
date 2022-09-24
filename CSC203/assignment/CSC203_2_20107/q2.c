#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int n,i=1;
    printf("Please enter the number to print it's table: ");
    scanf("%d",&n);
    for ( i = 1; i <=10; i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    }
    printf("\n\n\n");
    return 0;
}
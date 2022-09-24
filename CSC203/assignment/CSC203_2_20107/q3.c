#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int n,i=1,a=0,b=1,c;
    printf("Please enter how many terms you want to print in the Fibonacci sequence: ");
    scanf("%d",&n);
    printf("%d %d",a,b);
    for ( i = 1; i <= n-2; i++)
    {
        c=a+b;
        printf(" %d",c);
        a=b;
        b=c;
    }
    printf("\n\n\n");
    return 0;
}
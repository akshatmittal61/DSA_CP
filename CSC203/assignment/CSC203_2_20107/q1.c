#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int n,i=1;
    printf("Please enter the number upto which you want to print the squares: ");
    scanf("%d",&n);
    while(i<=n)
    {
        printf(" %d\t%d\n",i,i*i);
        ++i;
    };
    printf("\n\n\n");
    return 0;
}
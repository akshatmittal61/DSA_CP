#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i,m,n,s=0;
    printf("Enter the value of m: ");
    scanf("%d",&m);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    i=m;
    while(i<=n)
    {
        s+=i;
        ++i;
    }
    printf("The sum of numbers from m to n: %d",s);
    printf("\n\n\n");
    return 0;
}
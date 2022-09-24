#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int s[5],i;
    for( i=1;i<=5;++i)
    {
        s[i-1]=2*i;
    }
    for ( i = 0; i < 5; i++)
    {
        printf("%d ",s[i]);
    }
    printf("\n\n\n");
    return 0;
}
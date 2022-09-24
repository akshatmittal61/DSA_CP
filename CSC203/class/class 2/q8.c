#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i=1,n;
    scanf("%d",&n);
    do
    {
        printf("%d ^ 2 = %d\t",i,i*i);
        printf("%d ^ 3 = %d\n",i,i*i*i);
        ++i;
    } while (i<=n);
    printf("\n\n\n");
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    printf("\n\n\n");
    int n,i,j,k;
    printf("Please enter the number of lines: ");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        for(j=2*(n-i);j>=1;--j)
            printf("  ");
        for(k=1;k<=i;++k)
            printf(" %d",k);
        for(k=i-1;k>=1;--k)
            printf(" %d",k);
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
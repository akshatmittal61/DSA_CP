#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a[3][3],b[3][3],c[3][3],i,j,k;
    printf("Enter 1st array: \n");
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
            scanf("%d",&a[i][j]);
    printf("Enter 2nd array: \n");
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
            scanf("%d",&b[i][j]);
    for(i=0;i<3;++i)
        for(j=0;j<3;++j)
            c[i][j]=a[i][j]+b[i][j];
    printf("The final array: \n");
    for(i=0;i<3;++i)
    {
        for(j=0;j<3;++j)
            printf("%d ",c[i][j]);
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
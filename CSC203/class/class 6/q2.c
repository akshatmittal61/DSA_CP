#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10]={2,6,4,3,5,1,9,7,8,2},small,large,i,j,k,t;
    small=a[0],large=a[0];
    for ( i = 0; i < 10; i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            j=i;
        }
        if(a[i]>large)
        {
            large=a[i];
            k=i;
        }
    }
    t=a[j];
    a[j]=a[k];
    a[k]=t;

    for ( i = 0; i < 10; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n\n\n");
    return 0;
}
#include<stdio.h>
void swap(int *a,int *b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}
int main()
{
    printf("\n\n\n");
    int a[]={3,6,2,7,4,5,7,2},i,j,k,length;
    length=sizeof(a)/sizeof(int);
    for(j=0;j<length;++j)
    {
        for(i=0;i<length-1;++i)
        {
            if(a[i]>a[i+1])swap(&a[i],&a[i+1]);
        }
    }
    for(i=0;i<length;++i)printf("%d ",a[i]);
    printf("\n\n\n");
    return 0;
}
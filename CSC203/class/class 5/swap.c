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
    int a=10,b=20;
    printf("\n %ls %ls\n\n\n",&a,&b);
    printf("\n %d %d",a,b);
    swap(&a,&b);
    printf("\n %d %d",a,b);
    printf("\n\n\n");
}
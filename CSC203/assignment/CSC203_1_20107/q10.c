#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b,c;
    printf("\n Enter a: ");
    scanf("%d",&a);
    printf("\n Enter b: ");
    scanf("%d",&b);
    printf("\nBefore swapping: \n a = %d\n b = %d",a,b);
    c=a;
    a=b;
    b=c;
    printf("\nAfter swapping: \n a = %d\n b = %d",a,b);
    printf("\n\n\n");
    return 0;
}
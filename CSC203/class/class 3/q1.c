#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d%d",&a,&b);
    if(a>b)printf("a is greater than b");
    else if(a<b)printf("b is greater than a");
    else printf("They both are equal");
    printf("\n\n\n");
    return 0;
}
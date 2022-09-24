#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b&&a>c)printf("a is greatest");
    else if(b>a&&b>c)printf("b is greatest");
    else if(c>a&&c>b)printf("c is greatest");
    printf("\n\n\n");
    return 0;
}
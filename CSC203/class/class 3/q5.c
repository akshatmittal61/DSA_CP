#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)printf("The number is positive.");
    else if(a<0)printf("The nunber is negative");
    else printf("It's a zero");
    printf("\n\n\n");
    return 0;
}
#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("%d",(a>b)|(a!=0));
    printf("\n\n\n");
    return 0;
}
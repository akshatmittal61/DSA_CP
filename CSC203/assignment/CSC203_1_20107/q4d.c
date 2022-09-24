#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b,x;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter the value of determiner: ");
    scanf("%d",&x);
    printf("The probablity of number sufficing requiremnts is %d",((a>0&&a<10)||(b>0&&b<10))&&x);
    printf("\n\n\n");
    return 0;
}
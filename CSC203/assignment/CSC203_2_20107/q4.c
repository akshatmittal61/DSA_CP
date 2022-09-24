#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b,i=1,s=0,m;
    printf("Please enter the number to check for armstrong number: ");
    scanf("%d",&a);
    b=a;
    while (a!=0)
    {
        m=a%10;
        s+=(m*m*m);
        a/=10;
    }
    if(b==s)printf("The given number is an armstrong number.");
    else printf("The given number is not an armstrong number.");
    printf("\n\n\n");
    return 0;
}
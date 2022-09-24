#include<stdio.h>
int factorial(int n)
{
    if(n==1||n==0)return 1;
    else return n*factorial(n-1);
}
int main()
{
    printf("\n\n\n");
    printf("%d",factorial(5));
    printf("\n\n\n");
    return 0;
}
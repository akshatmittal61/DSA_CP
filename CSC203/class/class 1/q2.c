#include<stdio.h>
int main()
{
    int a,s=0;
    for (int i = 1; i <=20; i++)
    {
        printf("Enter the %d th number: ",i);
        scanf("%d",&a);
        s=s+a;
    }
    printf("\n\n\nAverage of the above numbers is %d\n\n\n",s/20);
    return 0;
}
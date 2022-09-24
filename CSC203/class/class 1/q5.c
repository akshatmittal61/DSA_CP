#include<stdio.h>
int main()
{
    int a=0,b=1,c,n;
    printf("\n\n\nEnter the numbes you want to see of Fibbanoci series: ");
    scanf("%d",&n);
    printf("The Fibbanoci Series is: \n\n%d,%d",a,b);
    for (int i = 0; i < n; i++)
    {
        c=a+b;
        printf(",%d",c);
        a=b;
        b=c;
    }
    printf("\n\n\n\n");
    return 0;
}
#include<stdio.h>
#include<math.h>
int main()
{
    printf("\n\n\n");
    int a[10],i,n,s=0;
    printf("Enter the no. of digits: ");
    scanf("%d",&n);
    printf("Enter the digits one by one: ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
        s+=a[i]*pow(10,i);
    }
    printf("The number formed is: %d",s);
    printf("\n\n\n");
    return 0;
}
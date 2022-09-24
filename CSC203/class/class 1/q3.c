#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int x,n;
    float ans=1;
    printf("\n\n\nEnter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for (int i = 1; i <=n; i++)
    {
        ans*=x;
    }
    
    printf("\n\n The result is: %f\n\n\n",ans);
    return 0;
}
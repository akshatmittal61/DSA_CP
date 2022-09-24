#include<stdio.h>
#include<math.h>
int main()
{
    printf("\n\n\n");
    float x,i=1,y,s=0;
    printf("Please enter the value of x for natural lagorithm: ");
    scanf("%f",&x);
    y=(x-1)/x;
    for (int i = 1; i <= 7; i++)
    {
        if(i!=1)s+=0.5*pow(y,i);
        else s+=pow(y,i);
    }
    printf("Natural logarithm of %f is %f",x,s);
    printf("\n\n\n");
    return 0;
}
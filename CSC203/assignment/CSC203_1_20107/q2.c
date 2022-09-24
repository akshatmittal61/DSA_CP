#include<stdio.h>
int main()
{
    printf("\n\n\n");
    float a,b,sum,val1,val2,ans;
    printf("Enter the first number: ");
    scanf("%f",&a);
    printf("Enter the second number: ");
    scanf("%f",&b);
    sum=a+b;
    val1=sum-b;
    val2=sum/a;
    ans=val1*val2;
    printf("\nThe sum of two numnbers is: %f",sum);
    printf("\nThe result after subtracting the second number from sum: %f",val1);
    printf("\nThe result after dividing the sum by first number: %f",val2);
    printf("\nThe final answer is: %f",ans);
    printf("\n\n\n");
    return 0;
}
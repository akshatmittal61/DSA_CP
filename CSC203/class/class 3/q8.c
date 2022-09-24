#include<stdio.h>
#include<math.h>
int main()
{
    printf("\n\n\n");
    float a,b,c,D;
    printf("\t\t Quadratic Equation solver\n\n");
    printf("\t\t ax^2 + bx + c\n\n");
    printf("Enter a: ");
    scanf("%f",&a);
    printf("Enter b: ");
    scanf("%f",&b);
    printf("Enter c: ");
    scanf("%f",&c);
    if(a==0)printf("Not a quadratic equation");
    else
    {
        D=(b*b)-(4*a*c);
        if(D>0)
        {
            printf("\n The Root are unique and distinct");
            printf("\n First root: %f",(-b+sqrt(D))/(2*a));
            printf("\n First root: %f",(-b-sqrt(D))/(2*a));
        }
        else if(D==0)
        {
            printf("\n The Root are equal");
            printf("\n The root is: %f",(-b)/(2*a));
        }
        else
        {
            printf("The roots are imaginary");
        }
    }
    printf("\n\n\n");
    return 0;
}
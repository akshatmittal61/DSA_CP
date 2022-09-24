#include<stdio.h>
#include<math.h>
int main()
{
    printf("\n\n\n");
    float a,b,c,s,area;
    printf("Enter the 3 sides of the triangle: ");
    scanf("%f %f %f",&a,&b,&c);
    s=(a+b+c)/2;
    area=s*(s-a)*(s-b)*(s-c);
    area=sqrt(area);
    printf("The area of triangle is: %f",area);
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int main()
{
    printf("\n\n\n");
    float a, b, c;
    printf("Enter the sides of triangle: \n");
    scanf("%f%f%f", &a, &b, &c);
    if ((a == b) && (b == c) && (c == a))
        printf("The triangle is equilateral triangle");
    else if ((a == b) || (b == c) || (c == a))
        printf("The triangle is isoceles triangle");
    else
        printf("The triangle is scalene triangle");
    printf("\n\n\n");
    return 0;
}

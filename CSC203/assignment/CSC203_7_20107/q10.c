#include <stdio.h>
union floatingPoint
{
    float f;
    double d;
    long double x;
} input;
int main()
{
    printf("\n\n\n");
    printf("\n Enter float value: ");
    scanf("%f", &input.f);
    printf("\n Enter double value: ");
    scanf("%lf", &input.d);
    printf("\n Enter long double value: ");
    scanf("%Lf", &input.x);
    //After this, all variables store same values, different format
    printf("\n Float value (f): %f", input.f);
    printf("\n Double value (d): %lf", input.d);
    printf("\n Long Double value (x): %Lf", input.x);
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
double roundToInteger(double a)
{
    double b;
    b = (int)(a + 0.5);
    return b;
}
double roundToTenths(double a)
{
    double b;
    b = (int)((a + 5) / 10);
    b *= 10;
    return b;
}
double roundToHundreds(double a)
{
    double b;
    b = (int)((a + 50) / 100);
    b *= 100;
    return b;
}
double roundToThousands(double a)
{
    double b;
    b = (int)((a + 500) / 1000);
    b *= 1000;
    return b;
}
int main()
{
    printf("\n\n\n");
    double x;
    printf("Enter a decimal number: ");
    scanf("%lf", &x);
    printf("\n Rounded off to nearest integer: %f", roundToInteger(x));
    printf("\n Rounded off to nearest tenths: %f", roundToTenths(x));
    printf("\n Rounded off to nearest hundereds: %f", roundToHundreds(x));
    printf("\n Rounded off to nearest thousands: %f", roundToThousands(x));
    printf("\n\n\n");
    return 0;
}
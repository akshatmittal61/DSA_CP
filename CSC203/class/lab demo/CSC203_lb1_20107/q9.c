#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int customer_id, unit;
    char name[20];
    float charge;
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("Enter your id: ");
    scanf("%d", &customer_id);
    printf("Enter the units used: ");
    scanf("%d", &unit);
    if (unit < 200)
        charge = 1.2 * unit;
    else if (unit >= 200 && unit < 400)
        charge = 1.5 * unit;
    else if (unit >= 400 && unit < 600)
        charge = 1.8 * unit;
    else
        charge = 2 * unit;
    if (charge > 400)
        charge += charge * 0.15;
    if (charge < 100)
        charge = 100;
    printf("The total bill to be paid: %f", charge);
    printf("\n\n\n");
    return 0;
}
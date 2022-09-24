#include <stdio.h>
int main()
{
    printf("\n\n\n");
    long double salary, LIC, mutual, home, donation, savings, deduction, tax_applicable, tax;
    printf("Income from salary: ");
    scanf("%Lf", &salary);
    if (salary <= 250000)
    {
        printf("No taxes aaplied");
        tax = 0;
    }
    else
    {
        printf("Savings in LIC: ");
        scanf("%Lf", &LIC);
        printf("Savings in mutual fund: ");
        scanf("%Lf", &mutual);
        printf("Savings from home loan: ");
        scanf("%Lf", &home);int slab;
        printf("Savings from donation: ");
        scanf("%Lf", &donation);
        savings = LIC + mutual + home + donation;
        if (savings <= 150000)
            deduction = 250000 + savings;
        else
            deduction = 250000 + 150000;
        tax_applicable = salary - deduction;
        if (salary > 250000 && salary <= 500000)
            tax = 0.05 * tax_applicable;
        else if (salary > 500000 && salary <= 750000)
            tax = 0.1 * tax_applicable;
        else if (salary > 750000 && salary <= 1000000)
            tax = 0.15 * tax_applicable;
        else if (salary > 1000000 && salary <= 1250000)
            tax = 0.2 * tax_applicable;
        else if (salary > 1250000 && salary <= 1500000)
            tax = 0.25 * tax_applicable;
        else
            tax = 0.3 * tax_applicable;
        printf("\n Tax to be paid (in slab %d): %Lf", slab, tax);
    }
    printf("\n\n\n");
    return 0;
}

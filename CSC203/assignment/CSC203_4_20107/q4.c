#include <stdio.h>
double toYen(double us_dollar)
{
    return us_dollar * 118.87;
}
double toEuro(double us_dollar)
{
    return us_dollar * 0.92;
}
void chart(double dollar[5])
{
    printf("\n Dollar \t\t Yen \t\t\t Euro");
    for (int i = 0; i < 5; i++)
        printf("\n %lf \t\t %lf \t\t %lf", dollar[i], toYen(dollar[i]), toEuro(dollar[i]));
}
int main()
{
    printf("\n\n\n");
    double dol[] = {1, 2, 3, 4, 5};
    chart(dol);
    printf("\n\n\n");
    return 0;
}
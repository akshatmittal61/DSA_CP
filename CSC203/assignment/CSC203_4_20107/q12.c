#include <stdio.h>
#include <math.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}
double series(int n)
{
    double s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += pow(i, i) / factorial(i);
    }
    return s;
}
int main()
{
    printf("\n\n\n");
    printf("The answer to the required series is: %lf", series(3));
    printf("\n\n\n");
    return 0;
}
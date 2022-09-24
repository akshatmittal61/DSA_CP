#include <stdio.h>
int factorial(int *a)
{
    int t = *a - 1;
    if (*a == 1 || *a == 0)
        return 1;   // 0!=1 and 1!=1
    else
        return *a * factorial(&t); // n! = n*(n-1)!
}
int main()
{
    printf("\n\n\n");
    int n = 5;
    printf("The factorial of %d is: %d", n, factorial(&n));
    printf("\n\n\n");
    return 0;
}
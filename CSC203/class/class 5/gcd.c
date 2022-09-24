#include <stdio.h>
int gcd(int a, int b)
{
    if (b % a == 0)
        return a;
    else
        return gcd(b % a, a);
}
int main()
{
    printf("\n\n\n");
    int a = 72, b = 128;
    printf("%d", gcd(a, b));
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a, b, i = 1, s = 0, m;
    printf("Please enter the 5-digit number: ");
    scanf("%d", &a);
    b = a;
    while (a != 0)
    {
        m = a % 10;
        s = (s * 10) + m;
        a /= 10;
    }
    printf("The reversed number is: %d\n", s);
    if (b == s)
        printf("The given number is equal to the original number.");
    else
        printf("The given number is not equal to the original number.");
    printf("\n\n\n");
    return 0;
}
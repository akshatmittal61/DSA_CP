#include <stdio.h>
int i = 1, a = 0, b = 1, c;
void fibanocci(int a, int b, int n)
{
    if (i == 1)
    {
        printf("%d %d ", a, b);
        i = 3;
    }
    else
    {
        c = a + b;
        printf("%d ", c);
        ++i;
        a = b;
        b = c;
    }
    if (i <= n)
        fibanocci(a, b, n);
}
int main()
{
    printf("\n\n\n");
    fibanocci(a, b, 10);
    printf("\n\n\n");
    return 0;
}
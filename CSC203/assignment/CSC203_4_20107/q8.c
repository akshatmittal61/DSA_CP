#include <stdio.h>
void swap(int *x, int *y, int *z)
{
    int t;
    t = *x;
    *x = *z;
    *z = *y;
    *y = t;
}
int main()
{
    printf("\n\n\n");
    int a = 1, b = 2, c = 3, t;
    printf("\n Before swapping: ");
    printf("\n a: %d b: %d c: %d", a, b, c);
    swap(&a, &b, &c);
    printf("\n After swapping: ");
    printf("\n a: %d b: %d c: %d", a, b, c);
    printf("\n\n\n");
    return 0;
}
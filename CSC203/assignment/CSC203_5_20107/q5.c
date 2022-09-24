#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10] = {2, 6, 4, 3, 5, 1, 9, 7, 8, 2}, large, large2, i, j, k, t;
    large = a[0], large2 = a[0];
    for (i = 0; i < 10; i++) //this loop determines the biggest number
    {
        if (a[i] > large)
        {
            large = a[i]; //if any number is greater than the present value of large, replace large
            k = i;
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (a[i] > large2 && i != k) //finds the 2nd biggest number by excluding the biggest number
            large2 = a[i];
    }
    printf("\n The 2nd biggest number is: %d", large2);
    printf("\n\n\n");
    return 0;
}
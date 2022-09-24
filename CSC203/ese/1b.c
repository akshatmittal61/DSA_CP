#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[] = {1, 2, 3, 4, 5}, b[] = {1,2, 2, 4, 5};
    int *A = a, *B = b;
    for (int i = 0; i < 5; ++i,*A++,*B++)
    {
        if (*A != *B)
            printf("\n Element %d not equal.", i + 1);
    }
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void print_array(int a[], int n)
{
    for (int i = 0; i < n; ++i)
        printf(" %d ", a[i]);
    printf("\n");
}
int main()
{
    printf("\n\n\n");
    int a[] = {3, 2, 6, 4, 7, 1, 3, 6, 9, 0, 5};
    int n = 11, i, j;
    printf("\n The original array: \n");
    print_array(a, n);
    for (i = 0; i < n; ++i) //selection sorting
    {
        int *b = a;
        for (j = 0; j < n - 1; ++j)
        {
            if (*b > *(b + 1))
                swap(&(*b), &(*(b + 1)));
            *b++;
        }
    }
    printf("\n The ordered array: \n");
    print_array(a, n);
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10] = {2, 6, 4, 3, 5, 1, 9, 7, 8, 2}, i, j, k = 0, length;
    length = sizeof(a) / sizeof(int); //length of array
    for (i = 0; i < length; ++i)
        printf("%d ", a[length - i - 1]); //length-i-1 will start printing from end
    printf("\n\n\n");
    return 0;
}
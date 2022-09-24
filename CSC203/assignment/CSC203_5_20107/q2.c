#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10] = {6, 4, 3, 5, 1, 9, 3, 7, 8, 2}, i, j, k = 0, length;
    length = sizeof(a) / sizeof(int); //length of array
    for (i = 0; i < length; ++i)
    {
        for (j = i + 1; j < length; ++j)
        {
            if (a[i] == a[j])
            {
                k++; //if no number is occuring more than once, k will remain zero
                break;
            }
        }
    }
    if (k == 0)
        printf("There's no duplicacy in the array");
    else
        printf("There is duplicacy in the array");
    printf("\n\n\n");
    return 0;
}
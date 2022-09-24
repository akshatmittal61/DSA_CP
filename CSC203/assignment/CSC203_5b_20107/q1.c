#include <stdio.h>
int linear_search(int a[], int n)
{
    int i, k = 0;
    for (i = 0; i < 10; ++i)
    {
        if (a[i] == n)  //compares the given number with every element of array
        {
            k = 1;  //true if element found
            printf("\n %d found at position %d", n, i);
        }
    }
    return k;
}
int main()
{
    printf("\n\n\n");
    int n, a[10] = {2, 5, 17, 45, 23, 12, 78, 12, 16, 23};
    printf("Which number do you want to find: ");
    scanf("%d", &n);    //input the number to be searched in the array
    if (linear_search(a, n))    //if function return true
        printf("\n Results found successfully!");
    else    //if function return false
        printf("\n No results found for %d in array.", n);
    printf("\n\n\n");
    return 0;
}
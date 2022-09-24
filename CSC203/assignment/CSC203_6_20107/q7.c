#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[] = {3, 2, 6, 4, 7, 1, 3, 6, 9, 0, 5};
    int n = 11,i,s=0;
    int *b=a;
    printf("\n The array: ");
    for(i=0;i<n;++i)
    {
        printf(" %d ", *b);
        s+=*b;  // add elemnts to s one by one
        *b++;
    }
    printf("\n The sum of the array elements: %d",s);
    printf("\n\n\n");
    return 0;
}
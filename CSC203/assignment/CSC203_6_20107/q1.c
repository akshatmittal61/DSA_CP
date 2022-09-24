#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10];
    for (int i = 0; i < 10; ++i)
    {
        printf("\n Address of element no. %d: %p", i + 1, &a[i]);
        // & operator gets the address of specified element
    }
    printf("\n\n\n");
    return 0;
}
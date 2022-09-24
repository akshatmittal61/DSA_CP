#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a = 5;
    int *b;
    b = &a;
    printf("The address of variable 'a' with value %d:\n %p", a, b);
    // & is used for reference
    // * is for de-referencing
    printf("\n\n\n");
    return 0;
}
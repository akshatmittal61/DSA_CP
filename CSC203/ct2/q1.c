#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int num1 = 2, num2 = 10;
    int *p = &num1, *q = &num2;
    *p++ = *q++;
    printf("num1: %d num2: %d\n",num1,num2);
    printf("p: %d q: %d\n",*p,*q);
    printf("\n\n\n");
    return 0;
}
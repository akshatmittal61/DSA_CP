#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i=1;
    do
    {
        printf("2 * %d = %d\n",i,2*i);
        ++i;
    } while (i<=10);
    printf("\n\n\n");
    return 0;
}
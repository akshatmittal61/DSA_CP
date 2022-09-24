#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n\n\n");
    int r, i;
    char a[2][36000];
    for (i = 0; i < 36000; i++)
    {
        r = (rand() % 2);   //assign 0 or 1 on random to r
        if (r)
        {
            a[0][i] = 'H';
            a[1][i] = 'T';
        }
        else
        {
            a[0][i] = 'T';
            a[1][i] = 'H';
        }
        printf("%c %c", a[0][i], a[1][i]);  //print the result of 1 toss of both dice
        printf("\t");
    }
    printf("\n\n\n");
    return 0;
}
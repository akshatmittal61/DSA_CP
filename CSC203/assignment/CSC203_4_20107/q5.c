#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int flip()
{
    int a = (rand() % 2);
    return a;
}
int main()
{
    srand(time(NULL));
    printf("\n\n\n");
    int a, i, h = 0, t = 0;
    for (i = 0; i < 100; i++)
    {
        a = flip();
        if (a == 0)
            printf(" Heads ");
        else if (a == 1)
            printf(" Tails ");
        switch (a)
        {
        case 0:
            t++;
            break;
        case 1:
            h++;
            break;
        default:
            break;
        }
    }
    printf("\n No. of times tails: %d", t);
    printf("\n No. of times heads: %d", h);
    printf("\n\n\n");
    return 0;
}
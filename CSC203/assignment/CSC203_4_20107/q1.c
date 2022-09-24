#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL));
    printf("\n\n\n");
    unsigned long int a, i, _1 = 0, _2 = 0, _3 = 0, _4 = 0, _5 = 0, _6 = 0;
    for (i = 0; i < 600000; i++)
    {
        a = (rand() % 6) + 1;
        switch (a)
        {
        case 1:
            _1++;
            break;
        case 2:
            _2++;
            break;
        case 3:
            _3++;
            break;
        case 4:
            _4++;
            break;
        case 5:
            _5++;
            break;
        case 6:
            _6++;
            break;
        default:
            break;
        }
    }
    printf("\nNo. of times each number was counted: ");
    printf("\n 1: %ld", _1);
    printf("\n 2: %ld", _2);
    printf("\n 3: %ld", _3);
    printf("\n 4: %ld", _4);
    printf("\n 5: %ld", _5);
    printf("\n 6: %ld", _6);
    printf("\n\n\n");
    return 0;
}
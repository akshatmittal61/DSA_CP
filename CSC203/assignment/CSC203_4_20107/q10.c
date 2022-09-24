#include <stdio.h>
void design_rect(int l, int b)
{
    int i, j;
    for (i = 1; i <= b; ++i)
    {
        for (j = 1; j <= l; ++j)
        {
            if (i == 1 || i == b)
                printf("*");
            else
            {
                if (j == 1 || j == l)
                    printf("!");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
}
int main()
{
    printf("\n\n\n");
    design_rect(8, 5);
    printf("\n\n\n");
    return 0;
}
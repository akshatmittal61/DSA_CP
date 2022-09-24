#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[3][3], b[3][3], i, j;

    printf("\n Enter 1st matrix: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            scanf("%d", &a[i][j]);  //input 1st matrix element-wise

    printf("\n Enter 2nd matrix: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            scanf("%d", &b[i][j]);  //input 2nd matrix element-wise

    printf("\n Final matrix: \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
            printf("%d ", a[i][j] + b[i][j]);   //print the addition of both matrices
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
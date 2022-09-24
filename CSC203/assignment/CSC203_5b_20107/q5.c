#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[3][3], i, j;

    printf("\n Enter matrix: \n");
    for (i = 0; i < 3; ++i)
        for (j = 0; j < 3; ++j)
            scanf("%d", &a[i][j]);  //input matrix element-wise

    printf("\n Transpose matrix: \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
            printf("%d ", a[j][i]); //print by transposing every element
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
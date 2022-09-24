#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, o, p;

    printf("\n Enter the order of 1st matrix: ");
    scanf("%d%d", &m, &n);
    printf("\n Enter 1st matrix: \n");
    for (i = 0; i < m; ++i)
        for (j = 0; j < n; ++j)
            scanf("%d", &a[i][j]);  //input 1st matrix element-wise
    
    printf("\n Enter the order of 2nd matrix: ");
    scanf("%d%d", &o, &p);
    printf("\n Enter 2nd matrix: \n");
    for (i = 0; i < o; ++i)
        for (j = 0; j < p; ++j)
            scanf("%d", &b[i][j]);  //input 2nd matrix element-wise
    
    if (n != o)
        printf("\n Matrix multiplication not possible.");   //if no. of columns of 1st matrix are not equal to no. of rows of 2nd matrix
    else
    {
        printf("\n Final matrix: \n");
        for (i = 0; i < m; ++i)
        {
            for (j = 0; j < p; ++j)
            {
                c[i][j] = 0;
                for (k = 0; k < n; ++k)
                    c[i][j] += a[i][k] * b[k][j];   //multiplying row of first matrix to corresponding column of 2nd matrix
                printf("%d ", c[i][j]);
            }
            printf("\n");
        }
    }
    printf("\n\n\n");
    return 0;
}
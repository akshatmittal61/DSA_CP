#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[3][3], i, j;
    printf("\n Required matrix: \n");
    for (i = 0; i < 3; ++i)
    {
        for (j = 0; j < 3; ++j)
        {
            if(i>j)a[i][j]=-1;  //for lower diagnol triangle
            else if(i<j)a[i][j]=1;  //for upper diagnol triangle
            else a[i][j]=0; //for principle diagnol

            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
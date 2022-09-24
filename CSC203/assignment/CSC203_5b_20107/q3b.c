#include<stdio.h>
#include<stdlib.h>
float mean(int a[], int n)
{
int s = 0, i;
for (i = 0; i < n; ++i)
s += a[i];
//sum all the numbers in the array
return (((float)s) / n); //return sum/n;
}
int main()
{
    printf("\n\n\n");
    int Grades[5][20],i,j;
    double mathGrades[20];
    for(i=0;i<20;++i)
        mathGrades[i]=(rand()%9)+1;
    printf("\n\nh) Enter the elements of array Grades: \n");
    for(i=0;i<5;++i)
    {
        printf("\nRow %d: \n",i+1);
        for(j=0;j<20;++j)
            scanf("%d",&Grades[i][j]);  //3h
    }
    printf("\n\ni) The array after initialization with 0: \n");
    for(i=0;i<5;++i)
    {
        for(j=0;j<20;++j)
        {
            Grades[i][j]=0;     //3i
            printf("%d ",Grades[i][j]);
        }
        printf("\n");
    }
    printf("\n\nj) First rwo of Grades after copying from mathGrades: \n");
    for(i=0;i<20;++i)
    {
        Grades[0][i]=mathGrades[i];     //3j
        printf("%d ",Grades[0][i]);
    }
    printf("\n\nk) The greatest number in the first row is: ");
    int big=Grades[0][0];
    for(i=0;i<20;++i)
        if(Grades[0][i]>big)big=Grades[0][i];
    printf("%d",big);
    printf("\n\nl) Elements of column 2 of array: ");
    for(i=0;i<5;++i)printf("%d ",Grades[i][1]);
    printf("\n\nm) The average of the elements in the first row: %f",mean(Grades[0],20));
    printf("\n\nn) The final array in tabular form: \n");
    for(i=-1;i<5;++i)
    {
        for(j=-1;j<20;++j)
        {
            if(i==-1)
            {
                if(j==-1)printf("    ");
                else printf("  %c ",j+65);
            }
            else
            {
                if(j==-1)printf("%d)  ",i+1);
                else printf("  %d ",Grades[i][j]);
            }
        }
        printf("\n");
    }
    printf("\n\n\n");
    return 0;
}
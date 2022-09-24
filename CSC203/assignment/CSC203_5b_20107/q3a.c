#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i;
    int Grades[5][20];  //3a
    printf("\na) Array is initia;ized as Grades[5][20]");
    printf("\nb) There are %d rows in the array.",5); //3b
    printf("\nc) There are %d columns in the array.",20); //3c
    printf("\nd) There are %d elements in the array.",5*20);  //3d
    printf("\ne) Names of all elements in the first column of array: ");
    for(i=0;i<5;++i)printf("%dx0, ",i); //3e
    printf("\nf) Name of the element in the third row and second column of the array: %dx%d",2,1);  //3f
    Grades[0][1]=100;   //3g
    printf("\ng) Element in the first row and second column: %d",Grades[0][1]);
    printf("\n\n\n");
    return 0;
}
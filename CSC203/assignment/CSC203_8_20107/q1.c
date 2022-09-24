#include <stdio.h>
int main()
{
    printf("\n\n\n");
    FILE *fio;
    fio = fopen("q1.txt", "w"); //q1.txt opened in write mode
    fprintf(fio, "%s\n%d", "Akshat Mittal", 7);
    fclose(fio); //data written and file closed
    printf(" Text written in file");
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char name[20];
    int Class;
} Student;
struct student stud[5] = {{2, "Jonas", 9},
                          {4, "Martha", 9},
                          {3, "Klaus", 12},
                          {5, "Stefen", 11},
                          {1, "Caroline", 11}};
//declaring values for 5 students
int main()
{
    printf("\n\n\n");
    int i = 0;
    FILE *fio;
    fio = fopen("q12.dat", "w+b"); //open q12.dat in write mode
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (i < 5)
        {
            fwrite(&stud[i], sizeof(stud[i]), 1, fio); //writing records to file
            fflush(stdin);
            ++i;
        }
    }
    fclose(fio);
    fio = fopen("q12.dat", "rb"); //open q12.dat in read mode
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (fread(&Student, sizeof(Student), 1, fio) == 1)
        {
            printf("\n Roll No.: %d", Student.roll);
            printf("\n Name: %s", Student.name);
            printf("\n Class: %d", Student.Class);
            printf("\n");
        }
    }
    fclose(fio);
    printf("\n\n\n");
    return 0;
}
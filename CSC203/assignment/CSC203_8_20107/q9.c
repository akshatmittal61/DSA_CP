#include <stdio.h>
#include <string.h>
struct student
{
    char name[20];
    int age;
} Student;
struct student stud[5] = {{"Jonas", 20},
                          {"Martha", 20},
                          {"Klaus", 19},
                          {"Stefen", 17},
                          {"Caroline", 17}};
int main()
{
    printf("\n\n\n");
    /* int i = 0;
    FILE *fio;
    fio = fopen("q9.dat", "w+b");
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (i<5)
        {
            fwrite(&stud[i], sizeof(stud[i]), 1, fio);
            fflush(stdin);
            ++i;
        }
    }
    fclose(fio); */
    //code for writing default entries to q7.dat
    print_sort();
    printf("\n\n\n");
    return 0;
}
int print_sort()
{
    struct student Stud[100], temp;
    int n = 0;
    FILE *fio;
    fio = fopen("q9.dat", "rb"); //open q9.dat in read mode
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (fread(&Student, sizeof(Student), 1, fio) == 1)
        {
            strcpy(Stud[n].name, Student.name);
            Stud[n].age = Student.age;
            ++n; //counting number of students
        }
        for (int i = 0; i < n; ++i)
        {
            for (int j = i + 1; j < n; ++j)
            {
                if (Stud[i].name[0] > Stud[j].name[0]) //arranging by bubble sort
                {
                    temp = Stud[i];
                    Stud[i] = Stud[j];
                    Stud[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; ++i)
        {
            printf("\n Name: %s", Stud[i].name);
            printf("\n Age: %d", Stud[i].age);
            printf("\n");
        }
    }
    fclose(fio);
    return 0;
}
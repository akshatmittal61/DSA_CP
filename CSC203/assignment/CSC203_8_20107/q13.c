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
void print_student(struct student *stud)
{
    printf("\n Roll No.: %d", stud->roll);
    printf("\n Name: %s", stud->name);
    printf("\n Class: %d", stud->Class);
}
int main()
{
    printf("\n\n\n");
    int i = 0, n = 0, choice, number;
    char ch = 'y', found = 'n', c, temp;
    float salary;
    struct student Stud[100];
    FILE *fio;
    /* fio = fopen("q13.dat", "w+b");
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (i < 5)
        {
            fwrite(&stud[i], sizeof(stud[i]), 1, fio);
            fflush(stdin);
            ++i;
        }
    }
    fclose(fio); */
    //code for writing default entries to q13.dat
    print_all();
    printf("\n 1. Enter details for new student");
    printf("\n 2. Details of a particular student");
    printf("\n 3. Edit a student's details");
    printf("\n 4. Remove a student");
    printf("\n 5. Print details of all students");
    do
    {
        printf("\n\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            fio = fopen("q13.dat", "a+b"); //open q13.dat in append mode
            printf("\n");
            printf(" Student Roll No.: ");
            scanf("%d", &Student.roll);
            printf(" Student Name: ");
            scanf("%s", Student.name);
            scanf("%c", &temp);
            printf(" Student Class: ");
            scanf("%d", &Student.Class);
            //writing new entry in q13.dat
            fwrite(&Student, sizeof(Student), 1, fio);
            fflush(stdin);
            fclose(fio);
            printf("\n Record Added");
            break;
        case 2:
            n = 0, i = 0;
            fio = fopen("q13.dat", "rb"); //open q13.dat in read mode
            if (fio == NULL)
            {
                printf("Cannot open file");
                return 0;
            }
            else
            {
                printf("\n Enter the roll number of student: ");
                scanf("%d", &number);
                while (fread(&Student, sizeof(Student), 1, fio) == 1)
                {
                    if (Student.roll == number)
                    {
                        print_student(&Student);
                        i = 1;
                    }
                }
                if (!i)
                    printf("\n No Student found");
            }
            fclose(fio);
            break;
        case 3:
            n = 0;
            fio = fopen("q13.dat", "rb"); //open q13.dat in read mode
            if (fio == NULL)
            {
                printf("Cannot open file");
                return 0;
            }
            else
            {
                while (fread(&Student, sizeof(Student), 1, fio) == 1)
                {
                    Stud[n].roll = Student.roll;
                    strcpy(Stud[n].name, Student.name);
                    Stud[n].Class = Student.Class;
                    ++n;
                }
            }
            fclose(fio);
            printf(" Enter the roll number of student: ");
            scanf("%d", &number);
            fio = fopen("q13.dat", "w+b"); //open q13.dat in write mode
            i = 0;
            while (i < n)
            {
                if (Stud[i].roll == number)
                {
                    printf("\n");
                    printf(" Student Roll No.: ");
                    scanf("%d", &Stud[i].roll);
                    printf(" Student Name: ");
                    scanf("%s", Stud[i].name);
                    scanf("%c", &temp);
                    printf(" Student Class: ");
                    scanf("%d", &Stud[i].Class);
                }
                //rewrite every entry except for modified student
                fwrite(&Stud[i], sizeof(Stud[i]), 1, fio);
                fflush(stdin);
                ++i;
            }
            fclose(fio);
            printf("\n Record Modified");
            break;
        case 4:
            n = 0;
            fio = fopen("q13.dat", "rb"); //open q13.dat in read mode
            if (fio == NULL)
            {
                printf("Cannot open file");
                return 0;
            }
            else
            {
                while (fread(&Student, sizeof(Student), 1, fio) == 1)
                {
                    Stud[n].roll = Student.roll;
                    strcpy(Stud[n].name, Student.name);
                    Stud[n].Class = Student.Class;
                    ++n;
                }
            }
            fclose(fio);
            printf(" Enter the roll number of student: ");
            scanf("%d", &number);
            fio = fopen("q13.dat", "w+b"); //open q13.dat in write mode
            i = 0;
            while (i < n)
            {
                if (Stud[i].roll != number)
                {
                    fwrite(&Stud[i], sizeof(Stud[i]), 1, fio);
                    fflush(stdin);
                }
                //rewrite every entry except for removed student
                ++i;
            }
            fclose(fio);
            printf("\n Record Deleted");
            break;
        case 5:
            print_all();
            break;
        default:
            printf("\n Wrong choice");
            break;
        }
        scanf("%c", &temp);
        printf("\n Again? ");
        scanf("%c", &ch);
    } while (ch == 'y' || ch == 'Y');
    printf("\n\n\n");
    return 0;
}
int print_all()
{
    FILE *fio;
    fio = fopen("q13.dat", "rb"); //open q13.dat in read mode
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (fread(&Student, sizeof(Student), 1, fio) == 1)
        {
            if (Student.roll != 0)
            {
                print_student(&Student);
                printf("\n");
            }
        }
    }
    fclose(fio);
    return 0;
}
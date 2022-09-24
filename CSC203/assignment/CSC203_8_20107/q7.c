#include <stdio.h>
#include <string.h>
struct employee
{
    int number;
    char name[20];
    char sex;
    float gross_salary;
} Employee;
void print_employee(struct employee *employes)
{
    printf("\n Employee Code: %d", employes->number);
    printf("\n Employee Name: %s (%c)", employes->name, employes->sex);
    printf("\n Employee gross salary: %f", employes->gross_salary);
}
//declaring values for 5 employes
struct employee employes[5] = {{1, "Jonas", 'M', 7500},
                               {2, "Martha", 'F', 6000},
                               {3, "Klaus", 'M', 50000},
                               {4, "Stefen", 'M', 10000},
                               {5, "Caroline", 'F', 15000}};
int main()
{
    printf("\n\n\n");
    int i = 0, n = 0, choice, number;
    char ch = 'y', found = 'n', c, temp;
    float salary;
    struct employee employe[100];
    FILE *fio;
    /* fio = fopen("q7.dat", "w+b");
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (i < 5)
        {
            fwrite(&employes[i], sizeof(employes[i]), 1, fio);
            fflush(stdin);
            ++i;
        }
    }
    fclose(fio); */
    //code for writing default entries to q7.dat
    print_all();
    printf("\n 1. Enter details for new employee");
    printf("\n 2. An employee is leaving");
    printf("\n 3. An update in an employee's salary");
    printf("\n 4. Print details of all employees");
    do
    {
        printf("\n\n Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            fio = fopen("q7.dat", "a+b"); //open q7.dat in append mode
            printf("\n");
            printf(" Employee Code: ");
            scanf("%d", &Employee.number);
            printf(" Employee Name: ");
            scanf("%s", Employee.name);
            scanf("%c", &temp);
            printf(" Employee sex: ");
            scanf("%c", &Employee.sex);
            printf(" Employee gross salary: ");
            scanf("%f", &Employee.gross_salary);
            //writing new entry in q7.dat
            fwrite(&Employee, sizeof(Employee), 1, fio);
            fflush(stdin);
            fclose(fio);
            printf("\n Record Added");
            break;
        case 2:
            n = 0;
            fio = fopen("q7.dat", "rb"); //open q7.dat in read mode
            if (fio == NULL)
            {
                printf("Cannot open file");
                return 0;
            }
            else
            {
                while (fread(&Employee, sizeof(Employee), 1, fio) == 1)
                {
                    employe[n].number = Employee.number;
                    strcpy(employe[n].name, Employee.name);
                    employe[n].sex = Employee.sex;
                    employe[n].gross_salary = Employee.gross_salary;
                    ++n;
                }
            }
            fclose(fio);
            printf("\n Enter the serial number of employee: ");
            scanf("%d", &number);
            fio = fopen("q7.dat", "w+b"); //open q7.dat in write mode
            i = 0;
            while (i < n)
            {
                if (employe[i].number == number)
                    employe[i].gross_salary = 0;
                //rewrite every entry except for removed employee salary=0
                fwrite(&employe[i], sizeof(employe[i]), 1, fio);
                fflush(stdin);
                ++i;
            }
            fclose(fio);
            printf("\n Record Deleted");
            break;
        case 3:
            n = 0;
            fio = fopen("q7.dat", "rb"); //open q7.dat in read mode
            if (fio == NULL)
            {
                printf("Cannot open file");
                return 0;
            }
            else
            {
                while (fread(&Employee, sizeof(Employee), 1, fio) == 1)
                {
                    employe[n].number = Employee.number;
                    strcpy(employe[n].name, Employee.name);
                    employe[n].sex = Employee.sex;
                    employe[n].gross_salary = Employee.gross_salary;
                    ++n;
                }
            }
            fclose(fio);
            printf(" Enter the serial number of employee: ");
            scanf("%d", &number);
            printf(" Enter new salary: ");
            scanf("%f", &salary);
            fio = fopen("q7.dat", "w+b"); //open q7.dat in write mode
            i = 0;
            while (i < n)
            {
                if (employe[i].number == number)
                    employe[i].gross_salary = salary;
                //rewrite every entry except for modified employee salary
                fwrite(&employe[i], sizeof(employe[i]), 1, fio);
                fflush(stdin);
                ++i;
            }
            fclose(fio);
            printf("\n Record Modified");
            break;
        case 4:
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
    fio = fopen("q7.dat", "rb"); //open q7.dat in read mode
    if (fio == NULL)
    {
        printf("Cannot open file");
        return 0;
    }
    else
    {
        while (fread(&Employee, sizeof(Employee), 1, fio) == 1)
        {
            if (Employee.gross_salary != 0)
            {
                print_employee(&Employee);
                printf("\n");
            }
        }
    }
    fclose(fio);
    return 0;
}
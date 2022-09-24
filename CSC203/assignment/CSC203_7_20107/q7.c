#include <stdio.h>
struct Date
{
    int date, month, year;
}current_date;
struct employee
{
    int code;
    char name[20];
    struct Date doj;
};
void print_employee(struct employee *employes)
{
    printf("\n Employee Code: %d", employes->code);
    printf("\n Employee Name: %s", employes->name);
    printf("\n Employee Date of joining: %d / %d / %d", 
            employes->doj.date, employes->doj.month, employes->doj.year);
}//declaring values for 5 employes
struct employee employes[5] = {{8300, "Jonas", {18, 11, 2018}},
                               {2600, "Martha", {25, 3, 2018}},
                               {6900, "Klaus", {1, 1, 2001}},
                               {4500, "Stefen", {25, 6, 2015}},
                               {8600, "Caroline", {28, 9, 2015}}};
int main()
{
    printf("\n Enter current date:- \n");
    printf(" Date: ");
    scanf("%d", &current_date.date);
    printf(" Month: ");
    scanf("%d", &current_date.month);
    printf(" Year: ");
    scanf("%d", &current_date.year);
    for (int i = 0; i < 5; ++i)
    {
        if ((current_date.year - employes[i].doj.year) > 3) print_employee(&employes[i]);
        else if ((current_date.year - employes[i].doj.year) == 3)   //year diff = 3
        {
            if ((current_date.month > employes[i].doj.month))   //month diff > 0
                print_employee(&employes[i]);
            else if ((current_date.month == employes[i].doj.month)) //no month diff
                if ((current_date.date > employes[i].doj.date))   //date diff > 0
                    print_employee(&employes[i]);
        }
    }
    return 0;
}
#include <stdio.h>
struct full_date
{
    int date, month, year;
} Date[2];
void enter_date(struct full_date *DATE) //to input date
{
    printf("\n Enter date: ");
    scanf("%d", &(DATE->date));
    printf(" Enter month: ");
    scanf("%d", &(DATE->month));
    printf(" Enter year: ");
    scanf("%d", &(DATE->year));
}
void print_date(struct full_date *DATE) //to output date
{
    printf("%d / %d / %d", (DATE->date), (DATE->month), (DATE->year));
}
int main()
{
    printf("\n\n\n");
    printf("\n Enter 1st date: \n");
    enter_date(&Date[0]);
    printf("\n Enter 2nd date: \n");
    enter_date(&Date[1]);
    //input for both date have been taken
    printf("\n\n");
    print_date(&Date[0]);
    printf(" and ");
    print_date(&Date[1]);
    //comparing date, month and year of both date
    if ((Date[0].date == Date[1].date) &&
        (Date[0].month == Date[1].month) &&
        (Date[0].year == Date[1].year))
        printf(" are equal.");
    else
        printf(" are not equal.");
    printf("\n\n\n");
    return 0;
}
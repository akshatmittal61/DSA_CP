#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    int roll;
    char name[20], course[10], department[10];
    int year;
}; //declaring values for 5 students
struct student Students[5] = {{1, "Jonas", "M.Tech.", "IT", 2017},
                              {2, "Martha", "BBA", "Arts", 2017},
                              {3, "Klaus", "Ph.D.", "Occult", 2001},
                              {4, "Stefen", "B.Tech.", "CSE", 2020},
                              {5, "Caroline", "B.Pharma.", "Neurology", 2020}};
void print_student(struct student *stud) //to print details of a student
{
    printf("\n\n Roll Number: %d", stud->roll);
    printf("\n Name: %s", stud->name);
    printf("\n Course: %s", stud->course);
    printf("\n Department: %s", stud->department);
    printf("\n Course: %s", stud->course);
    printf("\n Year of joining: %d", stud->year);
}
void print_join_year(int y) //print details of student with a particular year
{
    for (int i = 0; i < 5; ++i)
        if (Students[i].year == y)
            print_student(&Students[i]);
}
void print_student_roll(int r) //print details of student with a roll no.
{
    for (int i = 0; i < 5; ++i)
        if (Students[i].roll == r)
            print_student(&Students[i]);
}
int main()
{
    int y, r;
    printf("\n Enter a year: ");
    scanf("%d", &y);
    print_join_year(y);
    printf("\n\n Enter a roll no.: ");
    scanf("%d", &r);
    print_student_roll(r);
    return 0;
}
#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int day;
    printf("Enter the day no.: ");
    scanf("%d",&day);
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    default: printf("Not the day of week");
        break;
    }
    printf("\n\n\n");
    return 0;
}
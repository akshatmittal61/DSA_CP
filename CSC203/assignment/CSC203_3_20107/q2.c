#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
                printf("It is a leap year");
            else
                printf("It is not a leap year");
        }
        else
            printf("It is a leap year");
    }
    else
        printf("It is not a leap year");
    printf("\n\n\n");
    return 0;
}
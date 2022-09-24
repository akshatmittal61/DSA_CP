#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int number;
    printf("Enter a number from 1 to 10: ");
    scanf("%d",&number);
    switch (number%2)
    {
    case 0:
        printf("Even number");
        break;
    case 1:
        printf("Odd number");
        break;
    default:
        printf("not an integer");
        break;
   }
    printf("\n\n\n");
    return 0;
}
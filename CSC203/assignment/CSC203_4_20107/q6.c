#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("\n\n\n");
    int a, num;
    char c, temp;
    start:
    num = (rand() % 1000) + 1;
    printf("\nI have a number between 1 and 1000");
    printf("\nCan you guess my number?");
    printf("\nPlease type your first guess: ");
    do
    {
        printf("\n a: ");
        scanf("%d", &a);
        if (a > num)
            printf("Too High. Try Again");
        else if (a < num)
            printf("Too Low. Try Again");
        else
            printf("Excellent! You guessed the number!");
    } while (a != num);
    scanf("%c", &temp);
    printf("\nWould you like to play again (y or n)?");
    scanf("%c", &c);
    if (c == 'y' || c == 'Y')
        goto start;
    printf("\n\n\n");
    return 0;
}
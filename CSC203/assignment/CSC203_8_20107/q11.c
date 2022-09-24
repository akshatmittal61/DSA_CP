#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int lower = 0, upper = 0, number = 0, spaces = 0, special = -1;
    //special=-1 to neglect last terminating character provided by file pointer
    char ch;
    FILE *fio;
    fio = fopen("q11.txt", "r"); //open q11.txt in read mode
    printf("\n The string: \n\n ");
    do
    {
        ch = fgetc(fio);
        printf("%c", ch);
        if (ch >= '0' && ch <= '9')
            ++number; //for digits
        else if (ch >= 'A' && ch <= 'Z')
            ++upper; //for upppercase characters
        else if (ch >= 'a' && ch <= 'z')
            ++lower; //for upppercase characters
        else if (ch == ' ')
            ++spaces; //for spaces
        else
            ++special; //for special characters
    } while (ch != EOF);
    fclose(fio);
    printf("\n\n");
    printf("\n No. of uppercase characters: %d", upper);
    printf("\n No. of lowercase characters: %d", lower);
    printf("\n No. of digits: %d", number);
    printf("\n No. of spaces: %d", spaces);
    printf("\n No. of special characters: %d", special);
    printf("\n\n\n");
    return 0;
}
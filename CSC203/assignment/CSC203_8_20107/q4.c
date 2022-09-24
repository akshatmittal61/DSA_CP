#include <stdio.h>
int main()
{
    printf("\n\n\n");
    FILE *fio;
    int i = 0;
    char ch, str[20];
    fio = fopen("INPUT.TXT", "r"); //opening input.txt in read mode
    if (fio == NULL)
    {
        printf("Unable to locate the file");
        return 0;
    }
    else
    {
        do
        {
            ch = getc(fio); //getting file in string by character
            str[i++] = ch;
        } while (ch != EOF);
        str[i - 1] = '\0'; //to terminate string without EOF character
        fclose(fio);
    }
    int length = 0, j = 0, k;
    printf("\n\n The original string: \n\n %s", str);
    printf("\n\n The reversed string: \n\n ");
    for (i = 0; str[i] != '\0';)
    {
        for (length = j; str[length] != ' ' && str[length] != '\0'; ++length);
        if (i == 0)
            i = -1;
        ++i;
        for (int k = length - 1; k >= j && str[i] != '\0'; --k, ++i)
            printf("%c", str[k]); //printing the string from backwards
        j = length + 1;
        printf(" ");
    }
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int main()
{
    printf("\n\n\n");
    FILE *fio;
    int i = 0;
    char ch, str[1000];
    fio = fopen("TRIAL.TXT", "r"); //opening trial.txt in read mode
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
            if (ch == '\n')
                ch = ' '; //replacing new line feed by ' '
            str[i++] = ch;
        } while (ch != EOF);
        str[i - 1] = '\0'; //to terminate string without file terminator character
        fclose(fio);
    }
    int j = 0, k = 0, l = 0;
    printf("\n");
    printf("\n The string: \n%s", str);
    for (i = 0; str[i] != '\0'; ++i)
    {
        ++j;
        if (str[i] == ' ' || str[i + 1] == '\0')
        {
            ++k; //counting total words
            if ((j == 5) || (j == 4 && str[i + 1] == '\0'))
                ++l; //counting 4 letter words
            j = 0;
        }
    }
    printf("\n\n No. of words: %d", k);
    printf("\n\n 4 letter words: %d", l);
    printf("\n\n\n");
    return 0;
}
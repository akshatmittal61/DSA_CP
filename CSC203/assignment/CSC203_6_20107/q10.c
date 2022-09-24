#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Wait for me to come home";
    int i, j = 0, k = 0;
    printf("\n");
    printf("\n The string: \n%s", str);
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == ' ' || str[i + 1] == '\0')
            ++k;    //if a space or null charcater is encountered
    }
    printf("\n No. of words: %d", k);
    printf("\n\n\n");
    return 0;
}
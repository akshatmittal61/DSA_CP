#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Wait for me to come home";
    char *s = str;
    int length = 0, i, j = 0, k;
    printf("\n The original string: \n%s", str);
    printf("\n The reversed string: \n");
    for (i = 0; str[i] != '\0';)
    {
        for (length = j; str[length] != ' ' && str[length] != '\0'; ++length);
        //length of next word
        if (i == 0)
            i = -1;
        ++i;
        for (int k = length - 1; k >= j && str[i] != '\0'; --k, ++i)
            printf("%c", *(s + k)); //printing the from backwards
        j = length + 1;
        printf(" ");
    }
    printf("\n\n\n");
    return 0;
}
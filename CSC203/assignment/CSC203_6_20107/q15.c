#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Hearing you wispher through the phone";
    char check[] = "isphe";
    char *s = str, *c = check;
    int lc, i = 0, k = 0;
    for (lc = 0; check[lc] != '\0'; ++lc);
    for (; *s != '\0'; *s++)
    {
        k = 0;
        if (*s == *c)   //if 1st charcter is found
            for (i = 0; i < lc; ++i)
                if (*(s + i) == *(c + i))   //then check for all chcrcaters
                    ++k;
        if (k == lc)
        {
            printf("Substring \" %s \" is present in string\n ( %s )", check, str);
            break;
        }
    }
    printf("\n\n\n");
    return 0;
}
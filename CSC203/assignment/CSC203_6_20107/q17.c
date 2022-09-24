#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Wait For Me To Come Home";
    char *s = str;
    printf("\n The original string: %s", str);
    printf("\n The new string: ");
    for (; *s != '\0'; *s++)
    {
        if (*s >= 'a' && *s <= 'z')
            *s = *s - 32;   
            //if anycharcter is lowercase, change into uppercase
        printf("%c", *s);
    }
    printf("\n\n\n");
    return 0;
}
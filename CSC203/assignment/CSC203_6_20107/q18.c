#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Wait For Me To Come Home";
    char *s = str;
    int a, b;
    printf("\n The string: %s\n", str);
    printf("\n Starting point: ");
    scanf("%d", &a);    //from which character to trim
    printf("\n Length of subsection: ");
    scanf("%d", &b);    //length of substring
    printf("\n The substring: ");
    for (int i = 0; *s != '\0'; *s++, ++i)
    {
        if (i == a - 1)
            for (; i < a - 1 + b; ++i)
                printf("%c", *s++);
    }
    printf("\n\n\n");
    return 0;
}
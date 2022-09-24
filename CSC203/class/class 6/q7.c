#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n\n\n");
    char str[20], a[20];
    printf("\n Enter a string: ");
    scanf("%s", str);
    printf("\n The string is %ld charcacters long.", strlen(str));
    strcpy(a,str);
    printf("\n After copying the strings, the new string is: %s", a);
    printf("\n The string in reverse order: %s", strrev(str));
    strcat(str, a);
    printf("\n After concatenation of two strings: %s", str);
    printf("\n\n\n");
    return 0;
}
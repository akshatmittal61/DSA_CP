#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Wait for me to come home";
    char *s = str;
    int length = 0;
    for (length = 0; str[length] != '\0'; ++length);
    printf("\n The original string: \n%s", str);
    printf("\n The reversed string: \n");
    for (int i = length - 1; i >= 0; --i)
        printf("%c", *(s + i)); // printing the string from backwards
    printf("\n\n\n");
    return 0;
}
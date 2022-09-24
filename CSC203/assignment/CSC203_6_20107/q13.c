#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str1[] = "Hearing you wispher through the phone";
    char str2[100];
    char *s1 = str1, *s2 = str2;
    for (; *s1 != '\0'; *s1++, *s2++)
        *s2 = *s1;  //copying str1 in str2 by every character
    *s2 = '\0';
    printf("\n The 1st string: %s", str1);
    printf("\n The 2nd string: %s", str2);
    printf("\n\n\n");
    return 0;
}
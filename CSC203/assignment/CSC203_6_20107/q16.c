#include <stdio.h>
#include <string.h>
int main()
{
    printf("\n\n\n");
    char str1[] = "Hearing you wispher through the phone";
    char str2[] = "Wait for me to come home", str3[100] = "Photograph";
    printf("\n The length of 1st string: %ld", strlen(str1));
    strcpy(str3, str1);
    printf("\n 3rd string after copying: %s", str3);
    strcat(str2, str1);
    printf("\n 2nd string after concatenation: %s", str2);
    int t = strcmp(str1, str2);
    printf("\n Strings 1st and 2nd are ");
    if (!t)
        printf("same");
    else
        printf("not same");
    printf("\n\n\n");
    return 0;
}
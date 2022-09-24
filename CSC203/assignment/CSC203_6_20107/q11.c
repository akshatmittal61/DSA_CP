#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str1[] = "Hearing you wispher through the phone";
    char str2[] = "Wait for me to come home";
    char *s1 = str1, *s2 = str2;
    int l1 = 0, l2 = 0, i;
    for (i = 0; *s1 != '\0'; *s1++, l1++);  //length of 1st string
    for (i = 0; *s2 != '\0'; *s2++, l2++);  //length of 2nd string
    printf("\n 1st string: %s",str1);
    printf("\n 2nd string: %s\n ",str2);
    if (l1 > l2)
        printf("String 1st is greater than 2nd");
    else if (l1 < l2)
        printf("String 2nd is greater than 1st");
    else
        printf("Both strings have equal lengths");
    printf("\n\n\n");
    return 0;
}
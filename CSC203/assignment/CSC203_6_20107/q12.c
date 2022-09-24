#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Hello Adam 1*2#3";
    int alphabets = 0, digits = 0, special = 0;
    char *s = str;
    for (int i = 0; s[i] != '\0';)
    {
        if ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z'))
            ++alphabets;
        else if (*s >= '0' && *s <= '9')
            ++digits;
        else if (*s != ' ')
            ++special;  //if charcater is not alphabet, number or space
        *s++;
    }
    printf("String: %s\n", str);
    printf("\n Alphabets: %d", alphabets);
    printf("\n Digits: %d", digits);
    printf("\n Special characters: %d", special);
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char str[] = "Hello Adam 123";
    int vowels = 0, consonants = 0;
    char *s = str;
    for (int i = 0; s[i] != '\0';)
    {
        if (
            (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') ||
            (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u'))
            ++vowels;      // if s[i] is vowel
        else if (
            ((*s >= 'A' && *s <= 'Z') || (*s >= 'a' && *s <= 'z')) &&
            (!(
                (*s == 'A' || *s == 'E' || *s == 'I' || *s == 'O' || *s == 'U') ||
                (*s == 'a' || *s == 'e' || *s == 'i' || *s == 'o' || *s == 'u'))))
            ++consonants;   // if s[i] is alphabet but not vowel
        *s++;
    }
    printf("\n String: %s", str);
    printf("\n Vowels: %d \n Consonants: %d", vowels, consonants);
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int deletion(char a[], char s, int n)
{
    int i, j, pos = -1;
    for (i = 0; i < n; ++i)
    {
        pos = -1;
        if (a[i] == s)
            pos = i;
        if (pos != -1)
        {
            for (j = pos; j < n; ++j)
                a[j] = a[j + 1];    //if anyvowel found replace with next element
            a[j] = 0;
            --n, --i;
        }
    }
    return n;
}
int main()
{
    char str[] = "Wait for me to come home";
    printf("\n The old string: %s", str);
    int n = 0;
    for (n = 0; str[n] != '\0'; ++n);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (
            (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || 
            str[i] == 'U') ||(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u'))
            n = deletion(str, str[i], n), --i;  //remove any vowel
    }
    printf("\n The new string: %s", str);
    return 0;
}
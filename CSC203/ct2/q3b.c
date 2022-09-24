#include <stdio.h>
int main()
{
    printf("\n\n\n");
    char s[20], di = 0, ch = 0;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; ++i)
    {
        if (s[i] >= 48 && s[i] <= 57)
            ++di;
        else if ((s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122))
            ++ch;
    }
    int chper = (ch * 100) / (ch + di);
    int diper = (di * 100) / (ch + di);
    printf("charcater: %d \n digits: %d", chper, diper);
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
#include <string.h>
char *word_extract(char str[], int a)
{
    char *s;
    s[0] = '\0';
    int i = 0, j = 0, k = 0, count = 0;
    for (i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == ' ')
            ++count;
        if (count == a - 1)
        {
            if (a == 1)
                j == i;
            else
                j = i + 1;
            k = 0;
            do
            {
                s[k] = str[j];
                ++j, ++k;
            } while (str[j] != ' ');
            s[k] = '\0';
            return s;
        }
    }
}
int words(char *str)
{
    int i, count = 1;
    for(i=0;str[i]!='\0';++i)
    {
        if(str[i]==' ')count++;
    }
    return count;
}
void shift_back(char *str, int a)
{
    int i;
    for (i = a; str[i] != '\0'; ++i)
        str[i] = str[i + 1];
    str[i] = '\0';
}
int pos_return(char *str, char *check)
{
    char *s = str, *c = check;
    int lc, i = 0, j, k = 0, pos = 0;
    for (lc = 0; check[lc] != '\0'; ++lc)
        ;
    for (j = 0; *s != '\0'; *s++, j++)
    {
        k = 0;
        if (*s == *c)
        {
            pos = j;
            for (i = 0; i < lc; ++i)
                if (*(s + i) == *(c + i))
                    ++k;
        }
        if (k == lc)
            break;
    }
    return pos;
}
/* void replace(char *str, char *from, char *to)
{
    int word_no = 1, sp_count = 0, len_from = strlen(from), len_to = strlen(to), i = 0;
    char *word_cmp;
    for (word_no = 1; word_no <= words(str); ++word_no)
    {
        word_cmp = word_extract(str, word_no);
        if (!strcmp(from, word_cmp))
        {
            for (i = 0; i < len_from; ++i)
                shift_back(str, pos_return(str,from));
        }
    }
} */
int main()
{
    printf("\n\n\n");
    // int i, j, k;
    char *string[] = {"We will teach you how to",
                      "Move a mountain",
                      "Level a building",
                      "Erase the past",
                      "Make a million",
                      "all through C!"},
         str[] = "mountain is way too long";
    char check[] = "way";
    char *c = word_extract(str, 3);
    printf("\n str: %s", str);
    shift_back(str, 2);
    printf("\n str: %s", str);
    printf("\n The position of %s in str is: %d", check, pos_return(str, check));
    // int no_of_words = words(str);
    // replace(str,"way","really");
    char from[] = "way", to[] = "really";
    int word_no = 1, sp_count = 0, len_from = strlen(from), len_to = strlen(to), i = 0;
    char *word_cmp;
    printf("\n from: %s (%d)",from,len_from);
    printf("\n to: %s (%d)",to,len_to);
    // printf("\n Words in str: %d", no_of_words);
    /* word_cmp = word_extract(str, word_no);
    printf("\n%s ", word_cmp); */
    for (word_no = 1; word_no <= 5; ++word_no)
    {
        // word_cmp = word_extract(str, word_no);
        printf("\n %s - %s ",from, word_extract(str, word_no));
        // printf("\n %s ",from);
        /* if (!strcmp(from, word_cmp))
        {
            for (i = 0; i < len_from; ++i)
            {
                printf("\n str: %s",str);
                shift_back(str, pos_return(str, from));
            }
        } */
    }
    printf("\n str: %s", str);
    printf("\n Words in str: %d", words(str));
    printf("\nc: %s", c);
    printf("\n\n\n");
    return 0;
}
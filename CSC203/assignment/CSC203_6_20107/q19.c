#include <stdio.h>
#include <string.h>
int deletion(char a[], int s, int n)
{
    int i, j;
    for (i = 0; i < n; ++i)
    {
        for (j = s; j < n; ++j)
            a[j] = a[j + 1];
        a[j] = 0;
        --n, --i;
    }
    return n;
}
int main()
{
    printf("\n\n\n");
    int i, j, k,l,m;
    char *string[] = {"We will teach you how to",
                      "Move a mountain",
                      "Level a building",
                      "Erase the past",
                      "Make a million",
                      "all through C!"},
         str[] = "car", change[] = "mountain";
    for (i = 0; i < 6; ++i)
    {
        int n = strlen(string[i]);
        for (j = 0; j < strlen(string[i]); ++j)
        {
            if (string[i][j] == change[0])
            {
                printf("\n First letter matched at %d!", j + 1);
                for (k = 0; k < strlen(change); ++k)
                    if (string[i][k + j] != change[k])
                    {
                        printf("\n All was good until %d", k);
                        break;
                    }
                    else
                        printf("\n All good until %d (%c)=(%c)", k, string[i][k + j], change[k]);
                printf("\nstrlen of change: %ld \t k: %d", strlen(change), k);
                if (k == strlen(change))
                {
                    for (l = 0; l<strlen(change); ++l)
                    {
                        for (m = j; m < n; ++m)
                            string[m] = string[m + 1];
                        string[m] = '\0';
                        --n;
                        printf("\n\t String %d: %s", i + 1, string[i]);
                    }
                    // n = deletion(string[i], j, n);
                    // printf("\n\t String %d: %s", i + 1, string[i]);
                }
            }
        }
        printf("\n String %d: %s", i + 1, string[i]);
    }
    printf("\n\n\n");
    return 0;
}
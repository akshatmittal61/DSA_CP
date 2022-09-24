#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int n, i;
    char lines[100][100], temp;
    FILE *fio;
    fio = fopen("q3.txt", "w"); //opening q3.txt in write mode
    printf("\n Enter the no. of lines: ");
    scanf("%d", &n);
    scanf("%c", &temp); //temporary variable to flush buffer
    for (i = 0; i < n; ++i)
    {
        printf("\n Enter line %d: ", i + 1);
        gets(lines[i]);
        fprintf(fio, "%s\n", lines[i]); //writing lines to q3.txt
    }
    printf("\n\n\n");
    return 0;
}
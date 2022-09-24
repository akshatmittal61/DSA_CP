#include <stdio.h>
int main()
{
    printf("\n\n\n");
    FILE *fi, *fo;
    char ch;
    fi = fopen("q1.txt", "r"); //q1.txt opened in read mode
    fo = fopen("q2.txt", "w"); //q2.txt opened in write mode
    if (fi == NULL)
    {
        printf("Unable to locate file");
        return 0;
    }
    else
    {
        do
        {
            ch = getc(fi); //reading every character from q1.txt
            if (ch != EOF)
                fprintf(fo, "%c", ch); //writing character in q2.txt
        } while (ch != EOF);
        fclose(fi);
        fclose(fo);
        printf(" Contents copied");
    }
    printf("\n\n\n");
    return 0;
}
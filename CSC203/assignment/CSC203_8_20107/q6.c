#include <stdio.h>
int main()
{
    printf("\n\n\n");
    FILE *fi1,*fi2, *fo;
    char ch;
    fi1 = fopen("TRIAL.TXT", "r");  //opening input.txt in read mode
    fi2 = fopen("INPUT.TXT", "r");  //opening trial.txt in read mode
    fo = fopen("q6.txt", "a");  //opening q6.txt in write mode
    if ((fi1 == NULL)||(fi2 == NULL))
    {
        printf("Unable to locate file");
        return 0;
    }
    else
    {
        do
        {
            ch = getc(fi1); //getting character print in fo
            fprintf(fo, "%c", ch);
        } while (ch != EOF);
        printf("\n input.txt written in new file");
        do
        {
            ch = getc(fi2); //getting character print in fo
            fprintf(fo, "%c", ch);
        } while (ch != EOF);
        printf("\n trial.txt written in new file");
        fclose(fi1);
        fclose(fi2);
        fclose(fo);
    }
    printf("\n\n\n");
    return 0;
}
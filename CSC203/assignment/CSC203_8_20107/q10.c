#include <stdio.h>
int main()
{
    FILE *fi1, *fi2, *fo;
    char ch, ch1 = ' ', ch2 = '\n';
    fi1 = fopen("q10a.txt", "r"); //opening q10a.txt in read mode
    fi2 = fopen("q10b.txt", "r"); //opening q10b.txt in read mode
    fo = fopen("q10.txt", "w");   //opening q10.txt in write mode
    if ((fi1 == NULL) || (fi2 == NULL))
    {
        printf("Unable to locate file");
        return 0;
    }
    else
    {
        do
        {
            if (ch1 != EOF)
            {
                do
                {
                    ch1 = getc(fi1); //write characters until \n
                    if (ch1 == EOF)
                        break;
                    fprintf(fo, "%c", ch1);
                } while (ch1 != '\n');
            }
            if (ch2 != EOF)
            {
                do
                {
                    ch2 = getc(fi2); //write characters until \n
                    if (ch2 == EOF)
                        break;
                    fprintf(fo, "%c", ch2);
                } while (ch2 != '\n');
            }
        } while (ch2 != EOF || ch1 != EOF);
        printf("\n Files copied alternatively");
        fclose(fi1);
        fclose(fi2);
    }
    fclose(fo);
    printf("\n\n\n");
    return 0;
}
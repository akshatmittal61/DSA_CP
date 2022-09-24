#include <stdio.h>
int main()
{
    printf("\n\n\n");
    FILE *fio;
    fio = fopen("TRIAL.TXT", "r"); //open trial.txt in read mode
    if (!fio)
        printf("Cannot open");
    else
    {
        fseek(fio, 0, SEEK_END); //to put file pointer at the end
        printf("%ld bytes %f KB", ftello(fio), (float)ftello(fio) / 1024);
    }
    fclose(fio);
    printf("\n\n\n");
    return 0;
}
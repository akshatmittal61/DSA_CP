#include <stdio.h>
#include<string.h>
int main()
{
    printf("\n\n\n");
    char a[16]="Hello",b[]="How ate you";
    if(strcmp(a,b))
    {
        puts("Strings are equal");
    }
    printf("\n\n\n");
    return 0;
}
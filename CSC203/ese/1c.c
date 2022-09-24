#include <stdio.h>
#include<string.h>
int main()
{
    printf("\n\n\n");
    char a[]="Hello", b[]="Akshat here";
    if(strcmp(a,b)<0)
    {
        strcat(b,a);
        printf("\n b: %s",b);
    }
    else if(strcmp(a,b)>0)
    {
        strcat(a,b);
        printf("\n a: %s",a);
    }
    printf("\n\n\n");
    return 0;
}
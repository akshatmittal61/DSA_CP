#include <stdio.h>
union share
{
    int i;
    char ch;
};  // union of an interger and charcater
union share cnvt;
int main()
{
    printf("\n\n\n");
    cnvt.i = 65;
    printf("\n Integer:  %d", cnvt.i);  // 65
    printf("\n Character: %c", cnvt.ch);    // char(65) = A
    printf("\n\n\n");
    return 0;
}
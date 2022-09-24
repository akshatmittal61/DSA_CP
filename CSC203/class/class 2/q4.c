#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i=0,neg=0,pos=0,zer=0;
    while(i!=-1)
    {
        scanf(" %d ",&i);
        if(i==0)++zer;
        else if(i>0)++pos;
        else ++neg;
    }
    printf("\n Positive numbers: %d",pos);
    printf("\n Negitive numbers: %d",neg);
    printf("\n Zeroes: %d",zer);
    printf("\n\n\n");
    return 0;
}
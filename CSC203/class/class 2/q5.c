#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i,neg=0,pos=0;
    do
    {
        scanf("%d",&i);
        if(i>0)++pos;
        else if(i<0)++neg;
    } while (i!=0);    
    printf("\n Positive numbers: %d",pos);
    printf("\n Negitive numbers: %d",neg);
    printf("\n\n\n");
    return 0;
}
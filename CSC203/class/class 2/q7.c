#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int i,spos=0,sneg=0,pos=0,neg=0;
    do
    {
        scanf("%d",&i);
        if(i>0)spos+=i,++pos;
        else if(i<0)sneg+=i,++neg;
    } while (i!=-1);
    printf("\n Sum of Positive numbers: %d",spos);
    printf("\n Mean of Positive numbers: %d",spos/pos);
    printf("\n Sum of Negitive numbers: %d",sneg);
    printf("\n Mean of Negitive numbers: %d",sneg/neg);
    printf("\n\n\n");
    return 0;
}
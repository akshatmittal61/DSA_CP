#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int k=0;
    for (int i = 2; i < 300; i++)
    {
        k=0;
        for (int j = 2; j < i; j++)
        {
            if(i%j==0){++k;break;}
        }
        if(k==0)printf("%d ",i);
    }
    printf("\n\n\n");
    return 0;
}
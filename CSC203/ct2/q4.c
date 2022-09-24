#include<stdio.h>
#include<stdlib.h>
int question(int a,int b)
{
    printf("\n What is %d times %d: ",a,b);
    return a*b;
}
int main()
{
    printf("\n\n\n");
    int a,b,c,d;
    char check='y',temp;
    do
    {
        a=rand()%10;
        b=rand()%10;
        c=question(a,b);
        repeat:
        scanf("%d",&d);
        if(c==d)
        {
            printf("\n\n Very Good! \n Want to try again? ");
            scanf("%c",&temp);
            scanf("%c",&check);
        }
        else
        {
            printf("No. Please Try Again: ");
            goto repeat;
        }
    } while (check=='y'||check=='Y');
    printf("\n\n\n");
    return 0;
}
#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int i=1,overtime,overpay,time;
    while (i<=20)
    {
        printf("\nEnter the working hours of employe no. %d: ",i);
        scanf("%d",&time);
        if(time>40)
        {
            overtime=time-40;
            printf("Overtime pay of employee no. %d is %d ruppees\n",i,overtime*12);
        }
        else printf("For overtime, you have to work for more than 40 hours.\n");
        ++i;
    }
    printf("\n\n\n");
    return 0;
}
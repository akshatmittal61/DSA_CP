#include<stdio.h>
int main()
{
    int s=0,avg;
    for (int i = 1; i < 20; i++)
    {
        s=s+i;
    }
    avg=s/20;
    printf("\n\n\nThe sum of the first 20 natural numbers is: %d\n",s);
    printf("The average of the first 20 natural numbers is: %d\n\n\n",avg);
    return 0;
}
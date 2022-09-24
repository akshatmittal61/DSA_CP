#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int h_no;
    char colony[20],city[20];
    printf("Enter your house no. , colony and city name: \n");
    scanf("%d %s %s",&h_no,&colony,&city);
    printf("\n Your address is: \n  %d\n  %s\n  %s",h_no,colony,city);
    printf("\n\n\n");
    return 0;
}
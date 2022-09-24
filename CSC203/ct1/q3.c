#include<stdio.h>
int main()
{
    printf("\n\n\n");
    printf("\nEnter your code as per teh details: ");
    printf("\n 1. Manager");
    printf("\n 2. Hourly workers");
    printf("\n 3. Commission workers");
    printf("\n 4. Pieceworkers");
    printf("\n\n");
    int code,manager,h_w,c_w,p_w;
    float man_pay=5000,h_pay=20,c_pay=250,p_pay=50,hours,sales,items;
    scanf("%d",&code);
    switch (code)
    {
    case 1:
        printf("\n Enter the no. of managers: ");
        scanf("%d",&manager);
        printf("Total weekly pay for managers: %f",manager*man_pay);
        break;
    case 2:
        printf("\n Enter the no. of hourly workers: ");
        scanf("%d",&h_w);
        printf("Enter the total hours: ");
        scanf("%f",&hours);
        if(hours>40)printf("Total pay: %f",((40*h_pay)+((hours-40)*1.5*h_pay))*h_w);
        else printf("Total pay: %f",hours*h_pay);
        break;
    case 3:
        printf("\n Enter the no. of commission workers: ");
        scanf("%d",&c_w);
        printf("Enter your sales: ");
        scanf("%f",&sales);
        printf("Total pay for commission workers: %f",(c_pay+(5.7*sales))*c_w);
        break;
    case 4:
        printf("\n Enter the no. of piece workers: ");
        scanf("%d",&p_w);
        printf("Enter no. of items produced: ");
        scanf("%f",&items);
        printf("Total pay for piece workers: %f",items*p_pay*p_w);
        break;
    default: printf("Invalid Code");
        break;
    }
    printf("\n\n\n");
    return 0;
}
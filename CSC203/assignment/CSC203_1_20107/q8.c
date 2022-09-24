#include<stdio.h>
int main()
{
    printf("\n\n\n");
    float HRA,TA,salary,basic;
    printf("Enter the basic pay: ");
    scanf("%f",&basic);
    HRA=0.1*basic;
    TA=0.05*basic;
    salary=basic+HRA+TA;
    printf("Total salary: %f",salary);
    printf("\n\n\n");
    return 0;
}
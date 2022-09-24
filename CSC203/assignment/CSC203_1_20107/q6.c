#include<stdio.h>
#include<math.h>
int main()
{
    printf("\n\n\n");
    float P,R,T,SI,CI,A_CI;
    printf("Enter principle amount: ");
    scanf("%f",&P);
    printf("Enter interest rate: ");
    scanf("%f",&R);
    printf("Enter time duration: ");
    scanf("%f",&T);
    SI=(P*R*T)/100;
    A_CI=P*pow(1+(R/100),T);
    CI=A_CI-P;
    printf("\nThe simple interest is: %f",SI);
    printf("\nThe compound interest is: %f",CI);
    printf("\n\n\n");
    return 0;
}
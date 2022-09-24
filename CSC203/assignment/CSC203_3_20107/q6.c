#include <stdio.h>
int main()
{
    printf("\n\n\n");
    float temp;
    printf("Enter the temperature: ");
    scanf("%f", &temp);
    if (temp <= 0)
        printf("Freezing weather");
    else if (temp > 0 && temp <= 10)
        printf("Very cold weather");
    else if (temp > 10 && temp <= 20)
        printf("Cold weather");
    else if (temp > 20 && temp <= 30)
        printf("Normal temperature");
    else if (temp > 30 && temp <= 40)
        printf("It's hot");
    else
        printf("It's very hot");
    printf("\n\n\n");
    return 0;
}
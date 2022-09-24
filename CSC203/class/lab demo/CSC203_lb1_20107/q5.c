#include <stdio.h>
int main()
{
    printf("\n\n\n");
    float height;
    printf("Enter height (in inches): ");
    scanf("%f", &height);
    printf("\nHeight in cm: %f\n", height * 2.54);
    if (height < 60)
        printf("The person is a dwarf");
    else if (height > 86)
        printf("The person is tall");
    else
        printf("The person has average height");
    printf("\n\n\n");
    return 0;
}
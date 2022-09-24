#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[40], s = 0, i;
    printf("Rate the food: \n");
    for (i = 0; i < 40; ++i)
    {
        printf("Student %d: ", i + 1); //input every student feedback
        scanf("%d", &a[i]);
        if (a[i] <= 0)
            a[i] = 1; //if somebody has rated below 1, make it 1
        else if (a[i] > 10)
            a[i] = 10; //if somebody has rated above 10, make it 10
        s += a[i];     //sum the responses
    }
    printf("On an average, the food has the rating of: %d out of 10", s / 40); //print the average rating
    printf("\n\n\n");
    return 0;
}
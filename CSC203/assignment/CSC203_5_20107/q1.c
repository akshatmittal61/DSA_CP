#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int n, a[100], s = 0, i;
    printf("How many numbers do you wish to enter? ");
    scanf("%d", &n); //Amount of numbers to be entered
    for (i = 0; i < n; ++i)
    {
        printf(" Enter the number %d: ", i + 1);
        scanf("%d", &a[i]); //input the numbers
        s += a[i];          //find the sum of numbers in the array
    }
    printf("The mean of above numbers is: %f", (float)(s) / (float)(n));
    printf("\n\n\n");
    return 0;
}
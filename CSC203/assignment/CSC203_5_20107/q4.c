#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a[10], i, n, s = 0;
    printf("Enter the no. of digits: ");
    scanf("%d", &n); //n digit number will be formed
    printf("Enter the digits one by one: \n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);  //input the digits
        s = (s * 10) + a[i]; //add the digit to the number
    }
    printf("The number formed is: %d", s);
    printf("\n\n\n");
    return 0;
}
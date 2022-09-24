#include <stdio.h>
float mean(int a[], int n)
{
    int s = 0, i;
    for (i = 0; i < n; ++i)
        s += a[i];           //sum all the numbers in the array
    return (((float)s) / n); //return sum/n;
}
int mode(int a[], int n)
{
    int i, j, k, l = 0, m = 0;
    for (i = 1, k = 1; i < n; ++i)
    {
        if (a[i] == a[0])
            k++; //no. of times 1st element appears
    }
    m = 0;
    for (i = 0; i < n; ++i)
    {
        l = 1;
        for (j = 0; j < n; ++j)
        {
            if ((a[i] == a[j]) && (i != j))
                l++; //no. of times a[j] appears in the array
        }
        if (l > k)
            k = l, m = i; //if a[j] appears more times than a[k], replace a[k]
    }
    return a[m]; //returns mode (if any), if every number occurs once, returns first element
}
int main()
{
    printf("\n\n\n");
    int n, a[100], s = 0, i;
    printf("How many numbers do you wish to enter? ");
    scanf("%d", &n); //how many numbers to enter
    for (i = 0; i < n; ++i)
    {
        printf(" Enter the number %d: ", i + 1);
        scanf("%d", &a[i]); //input the numbers in the array
    }
    printf("\n The mean of above numbers is: %f", mean(a, n));
    printf("\n The mode of above numbers is: %d", mode(a, n));
    printf("\n\n\n");
    return 0;
}
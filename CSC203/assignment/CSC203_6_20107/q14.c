#include <stdio.h>
char mode(char a[], int n)
{
    int i, j, k, l = 0, m = 0;
    for (i = 0; a[i] != '\0'; ++i)
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;     //to convert whole string in lowercase to avoid ambiguity
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
            if ((a[i] == a[j]) && (i != j) && (a[j] != ' '))
                l++; //no. of times a[j] appears in the array
        }
        if (l > k)
            k = l, m = i; //if a[j] appears more times than a[k], replace a[k]
    }
    return a[m]; //returns mode (if any), if every number occurs once, returns first ele
}
int main()
{
    printf("\n\n\n");
    char str[] = "Hearing you wispher through the phone";
    int length;
    for (length = 0; str[length] != '\0'; ++length);
    printf("The string: %s", str);
    printf("\n The most occuring character: %c", mode(str, length));
    printf("\n\n\n");
    return 0;
}
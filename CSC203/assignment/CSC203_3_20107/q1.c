#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int a, b;
    char ch, temp;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter mathematical operation: ");
    scanf("%c", &temp);
    scanf("%c", &ch);
    switch (ch)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    default:
        printf(" wrong operation");
        break;
    }
    printf("\n\n\n");
    return 0;
}
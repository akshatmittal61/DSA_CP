#include <stdio.h>
float PI = 3.14159;
enum
{
    CIRCLE,
    RECTANGLE,
    TRIANGLE
};
struct shape_area
{
    float a, b;
    int shape;
};
float area(struct shape_area *sh)
{
    if (sh->shape == 1)
        return PI * (sh->a) * (sh->b);
    else if (sh->shape == 2)
        return (sh->a) * (sh->b);
    else if (sh->shape == 3)
        return 0.5 * (sh->a) * (sh->b);
    else
        return 0;
}
int main()
{
    printf("\n\n\n");
    struct shape_area var;
    int choice;
    char ch;
    float r, a, b;
    printf("\n Enter shape for area: ");
    printf("\n 1. Circle");
    printf("\n 2. Rectangle");
    printf("\n 3. Triangle");
    printf("\n Enter your choice: ");
    scanf("%d", &choice);
    var.shape = choice;
    if (choice == 1)
    {
        printf("Enter radius: ");
        scanf("%f", &r);
        var.a = r, var.b = r;
    }
    else if (choice == 2)
    {
        printf("Enter length: ");
        scanf("%f", &a);
        printf("Enter breadth: ");
        scanf("%f", &b);
        var.a = a, var.b = b;
    }
    else if (choice == 3)
    {
        printf("Enter breadth: ");
        scanf("%f", &a);
        printf("Enter height: ");
        scanf("%f", &b);
        var.a = a, var.b = b;
    }
    printf("\n Area: %f", area(&var));
    printf("\n\n\n");
    return 0;
}
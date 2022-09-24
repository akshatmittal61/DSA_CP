#include <stdio.h>
#include <math.h>
double roundToInteger(double a)
{
    double b;
    b = (int)(a + 0.5);
    return b;
}
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt((pow((x2 - x1), 2)) + (pow((y2 - y1), 2)));
}
float area(float x1, float y1, float x2, float y2, float x3, float y3)
{
    float a, b, c, s;
    a = distance(x1, y1, x2, y2);
    b = distance(x2, y2, x3, y3);
    c = distance(x3, y3, x1, y1);
    printf("\n %f \t %f \t %f\n",a,b,c);
    s = (a + b + c) / 2;
    return sqrt(s * (s - a) * (s - b) * (s - c));
}
int check(float x, float y, float x1, float y1, float x2, float y2, float x3, float y3)
{
    float area_PAB = area(x, y, x1, y1, x2, y2);
    float area_PBC = area(x, y, x2, y2, x3, y3);
    float area_PCA = area(x, y, x3, y3, x1, y1);
    float tot = area_PAB + area_PBC + area_PCA;
    float area_ABC = area(x1, y1, x2, y2, x3, y3);
    printf("\n %f \t %f \n",tot,area_ABC);
    if (roundToInteger(tot) == roundToInteger(area_ABC))
        return 1;
    else
        return 0;
}
int main()
{
    printf("\n\n\n");
    float x1, y1, x2, y2, x3, y3, x, y;
    printf("Enter the coordiantes of triangle: \n");
    printf(" x1: ");
    scanf("%f", &x1);
    printf(" y1: ");
    scanf("%f", &y1);
    printf(" x2: ");
    scanf("%f", &x2);
    printf(" y2: ");
    scanf("%f", &y2);
    printf(" x3: ");
    scanf("%f", &x3);
    printf(" y3: ");
    scanf("%f", &y3);
    printf("Enter the coordinates of point to be checked: \n");
    printf(" x: ");
    scanf("%f", &x);
    printf(" y: ");
    scanf("%f", &y);
    if (check(x, y, x1, y1, x2, y2, x3, y3))
        printf("Yes P lies inside triangle ABC");
    else
        printf("No P does not lies inside triangle ABC");
    printf("\n\n\n");
    return 0;
}
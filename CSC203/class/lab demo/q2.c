#include <stdio.h>
int main()
{
    printf("\n\n\n");
    int x = 22, y = 14, a = 11, b = 23, g = 12, i = 10, j = 5;
    printf("\n Original Variables: ");
    printf("\n x = %d", x);
    printf("\n y = %d", y);
    printf("\n a = %d", a);
    printf("\n b = %d", b);
    printf("\n g = %d", g);
    printf("\n i = %d", i);
    printf("\n j = %d", j);
    printf("\n\n");
    if ((!(x < 5) && !(y >= 7)) == (!((x < 5) || (y >= 7))))
        printf("(!(x==5)&&!(y>=7) is equivalent to !(x==5)||(y>=7))");
    else
        printf("(!(x==5)&&!(y>=7) is not equivalent to !(x==5)||(y>=7))");
    printf("\n\n");
    if ((!(a == b) || !(g != 5)) == (!((a == b) && (g != 5))))
        printf("(!(a==b)||!(g!=5)) is equivalent to (!((a==b)&&(g!=5)))");
    else
        printf("(!(a==b)||!(g!=5)) is not equivalent to (!((a==b)&&(g!=5)))");
    printf("\n\n");
    if ((!((x <= 8) || (y > 4))) == (!(x <= 8) && !(y > 4)))
        printf("!((x<=8)||(y>4)) is equivalent to !(x<=8)&&!(y>4)");
    else
        printf("!((x<=8)||(y>4)) is not equivalent to !(x<=8)&&!(y>4)");
    printf("\n\n");
    if ((!((i > 4) || (j <= 6))) == (!(i > 4) && !(j <= 6)))
        printf("(!((i>4)||(j<=6))) is equivalent to !(i>4)&&!(j<=6)");
    else
        printf("(!((i>4)||(j<=6))) is not equivalent to !(i>4)&&!(j<=6)");
    printf("\n\n\n");
}
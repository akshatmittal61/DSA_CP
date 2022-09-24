#include <stdio.h>
int return_sec(int h, int m, int s)
{
    int sec;
    if (s > 60)
    {
        m = m + (s / 60);
        s = s % 60;
    }
    if (m > 60)
    {
        h = h + (m / 60);
        m = m % 60;
    }
    if (h > 12)
        h = h % 12;
    printf("\n Your entered time is: %d : %d : %d", h, m, s);
    sec = (h * 3600) + (m * 60) + s;
    return sec;
}
int main()
{
    printf("\n\n\n");
    int h, m, s, sec;
    printf("Enter the time (12-hour clock): ");
    scanf("%d%d%d", &h, &m, &s);
    sec = return_sec(h, m, s);
    printf("\n Seconds elapsed since last 12: %d", sec);
    printf("\n\n\n");
    return 0;
}
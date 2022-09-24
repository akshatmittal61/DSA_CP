#include<stdio.h>
int main()
{
    printf("\n\n\n");
    int a,b,c,d,total,avg;
    char grade;
    printf("Enter marks in four subjects from 100: ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    total=a+b+c+d;
    avg=total/4;
    if(avg>80)grade='A';
    else if(avg>60&&avg<=80)grade='B';
    else if(avg>40&&avg<=60)grade='C';
    else if(avg>33&&avg<=40)grade='D';
    else grade='E';
    printf("\nThe total of student is: %d",total);
    printf("\nThe aggregate of student is: %d",avg);
    printf("\nThe grade of student is: %c",grade);
    printf("\n\n\n");
    return 0;
}
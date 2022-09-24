#include<stdio.h>
int main()
{
    printf("\n\n\n");
    char c;
    printf("Enter a character: ");
    scanf("%c",&c);
    if(c>='A'&&c<='Z')printf("%c",c+32);
    else if(c>='a'&&c<='z')printf("%c",c-32);
    else printf("The character is not alpahabet");
    printf("\n\n\n");
    return 0;
}
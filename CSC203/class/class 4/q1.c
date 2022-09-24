#include<stdio.h>
int main()
{
    printf("\n\n\n");
    char ch;
    printf("Enter the lowewrcase character: ");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a': printf("Vowel");
        break;
    case 'e': printf("Vowel");
        break;
    case 'i': printf("Vowel");
        break;
    case 'o': printf("Vowel");
        break;
    case 'u': printf("Vowel");
        break;
    default: printf("consonants");
        break;
    }
    printf("\n\n\n");
    return 0;
}
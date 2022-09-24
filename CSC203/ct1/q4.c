
#include <stdio.h>
int main()
{
	int i, j, number;
	printf("Enter 5 numbers between 1 and 30: \n");
	for (i = 0; i < 5; i++)
	{
		scanf("%d", &number);
		for (j = 1; j <= number; j++)
		{
			printf(" * ");
		}
		printf("\n");
	}
	return 0;
}
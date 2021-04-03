#include<stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	
	for (i = 1; i <= a; i++)
	{

		for (int b = 1; b < i; b++)
		{
			printf(" ");
		}

		for (int c = i; c < a; c++)
		{
			printf("**");
		}

		printf("*");


		printf("\n");
	}
	for (i = a; i > 1; i--)
	{

		for (int b = 1; b < i-1; b++)
		{
			printf(" ");
		}
		printf("*");
		for (int c = i-1; c < a; c++)
		{
			printf("**");
		}
		printf("\n");
	}
	return 0;
}
#include<stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	for (i = a; i > 0; i--)
	{

		for (int b = 1; b < i; b++)
		{
			printf(" ");
		}
		printf("*");
		for (int c = i; c < a; c++)
		{
			printf("**");
		}
		printf("\n");
	}
	for (i = 1; i <= a-1; i++)
	{

		for (int b = 0; b < i; b++)
		{
			printf(" ");
		}

		for (int c = i; c < a-1; c++)
		{
			printf("**");
		}

		printf("*");


		printf("\n");
	}
	return 0;
}
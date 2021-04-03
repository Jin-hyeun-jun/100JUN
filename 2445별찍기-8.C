#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c, i;
	scanf("%d", &a);

	for (i = 1; i <= a; i++)
	{



		for (b = 1; b <= i; b++)
		{
			printf("*");
		}
		for (c = a - i; c > 0; c--)
		{
			printf(" ");
		}
		for (c = a - i; c > 0; c--)
		{
			printf(" ");
		}
		for (b = 1; b <= i; b++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= a; i++)
	{


		for (c = a - i; c > 0; c--)
		{
			printf("*");
		}
		for (b = 1; b <= i; b++)
		{
			printf(" ");
		}
		for (b = 1; b <= i; b++)
		{
			printf(" ");
		}
		for (c = a - i; c > 0; c--)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

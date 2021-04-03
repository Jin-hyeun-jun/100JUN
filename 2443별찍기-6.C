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
	return 0;
}
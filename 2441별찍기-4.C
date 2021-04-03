#include<stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	for (i = 0; i < a; i++)
	{
		for (int b = 0; b < i; b++)
		{
			printf(" ");
		}
		
		for (int c = a-i; c > 0; c--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
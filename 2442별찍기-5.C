#include<stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	for (i = a; i >0; i--)
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
	return 0;
}
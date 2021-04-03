#include<stdio.h>
int main()
{
	int a,b,c,i;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
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
	return 0;
}
#include<stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	for (i = a; i >= 0; i--)
	{
		for (int c = i; c > 0; c--)
		{
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
}
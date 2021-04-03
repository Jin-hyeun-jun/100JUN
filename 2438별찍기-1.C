#include<stdio.h>
int main()
{
	int a, i;
	scanf("%d", &a);
	for (i = 1; i <= a; i++)
	{
		
		for (int b = 1; b <= i; b++)
		{
			printf("*");
		}
		printf("\n");
	}




	return 0;
}


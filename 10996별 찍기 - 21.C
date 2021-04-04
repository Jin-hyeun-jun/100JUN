#include <stdio.h>
void prints(int b)
{
	int i = 0;
	printf("*");
	while (i < b - 1)
	{
		printf(" *");
		i++;
	}
	printf("\n");
	i = 0;
	while (i < b)
	{
		printf(" *");
		i++;
	}

}
void printss(int c)
{
	int i = 0;
	printf("*");

	while (i < c)
	{
		printf(" *");
		i++;
	}
	printf("\n");
	i = 0;
	while (i < c)
	{
		printf(" *");
		i++;
	}
}
int main()
{
	int a, b, c;
	scanf("%d", &a);
	b = a / 2;
	c = (a - 1) / 2;
	int i = 0;
	if (a == 1)
	{
		printf("*");
		return 0;
	}
	if (a % 2 == 0)
	{
		while (i < a)
		{
			prints(b);
			printf("\n");
			i++;
		}
	}
	if (a % 2 == 1)
	{
		while (i < a)
		{
			printss(c);
			printf("\n");
			i++;
		}
	}
	return 0;
}
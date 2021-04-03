#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b;
	scanf("%d", &a);
	int i = 1;
	while (i <= 9)
	{
		b = a;
		b = b * i;
		printf("%d * %d = %d\n", a, i, b);
		i++;
	}


	return 0;
}
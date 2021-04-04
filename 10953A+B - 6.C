#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c, d;
	char e;
	scanf("%d", &a);
	int i = 0;
	while (i < a)
	{
		scanf("%d%c%d", &b, &e, &c);

		d = c + b;

		printf("%d\n", d);
		i++;
	}




	return 0;
}
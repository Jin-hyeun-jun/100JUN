#include<stdio.h>
#pragma warning(disable:4996)
int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	int i = 1;
	while (i <= a)
	{
		scanf("%d %d", &b, &c);

		d = c + b;

		printf("Case #%d: %d\n", i, d);
		i++;
	}




	return 0;
}
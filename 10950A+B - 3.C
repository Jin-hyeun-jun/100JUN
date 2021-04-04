#include<stdio.h>
int main()
{
	int a, b, c, d;
	scanf("%d", &a);
	int i = 0;
	while (i < a)
	{
		scanf("%d %d", &b, &c);
		d = c + b;
		printf("%d\n",d);
		i++;
    }
		
	return 0;
}

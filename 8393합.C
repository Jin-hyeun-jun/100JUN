#include<stdio.h>
int main()
{
    int a, i, n;

    n = 0;
    i = 0;
    scanf("%d", &a);
    while (i < a + 1)
    {
        n = n + i;
        i++;
    }
    printf("%d", n);
    return 0;
}
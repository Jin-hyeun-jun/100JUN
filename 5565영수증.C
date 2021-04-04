#include<stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    c = 0;
    d = 0;
    while (c < 9)
    {
        scanf("%d", &b);
        d = d + b;
        c++;
    }
    printf("%d", a - d);
    return 0;
}
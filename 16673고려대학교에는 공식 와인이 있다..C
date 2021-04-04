#include<stdio.h>
int main()
{
    int a, b, c, d = 1, e, h = 0;
    scanf("%d %d %d", &a, &b, &c);
    while (a >= d)
    {
        e = d * b + d * d * c;
        d++;
        h = h + e;
    }
    printf("%d", h);
    return 0;

}
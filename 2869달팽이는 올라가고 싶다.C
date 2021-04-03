#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    scanf("%d %d %d", &a, &b, &c);
    d = (c - b) % (a - b);
    e = (c - b) / (a - b);
    if (d == 0)
    {
        printf("%d", e);
        return 0;
    }
    printf("%d", e + 1);
}
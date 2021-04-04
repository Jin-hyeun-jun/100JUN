#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g, j, h;
    scanf("%d %d", &a, &b);
    scanf("%d %d", &c, &d);
    scanf("%d", &e);


    if (((c + e) / a) % 2 == 0)
    {
        h = (c + e) % a;
    }
    if (((c + e) / a) % 2 != 0)
    {
        h = a - (c + e) % a;
    }
    if (((d + e) / b) % 2 == 0)
    {
        j = (d + e) % b;
    }
    if (((d + e) / b) % 2 != 0)
    {
        j = b - (d + e) % b;
    }

    printf("%d %d", h, j);
    return 0;
}
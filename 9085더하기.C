#include <stdio.h>
int main()
{
    int a, b, c, d, f, i;
    i = 0;
    scanf("%d", &a);
    while (i < a)
    {
        d = 0;
        f = 0;
        scanf("%d", &b);
        while (f < b)
        {
            scanf("%d", &c);
            d = d + c;
            f++;
        }
        printf("%d\n", d);
        i++;
    }
    return 0;
}
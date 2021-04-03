#include <stdio.h>
int main()
{
    int a, b, c, d, e, f;

    b = 1;
    e = 0;
    f = 0;
    while (b < 6)
    {
        a = 0;
        d = 0;
        while (a < 4)
        {
            scanf("%d", &c);
            d = d + c;
            if (e < d)
            {
                e = d;
                f = b;
            }
            a++;
        }
        b++;
    }
    printf("%d %d", f, e);
    return 0;
}
#include <iostream>
int main()
{
    int a, b, c, d, e, f, g, h;
    scanf("%d", &a);
    b = 0;
    f = 0;
    g = 0;
    h = 0;
    while (b < a)
    {
        scanf("%d", &c);
        if (b > 0)
        {
            e = c - d;
            if (e <= 0)
            {
                g++;
                f = 0;
            }

            if (e > 0)
            {
                f = f + e;
            }
            if (h < f)
            {
                h = f;
            }
        }
        d = c;
        b++;
    }
    if (a == g + 1)
    {
        printf("0");
        return 0;
    }
    printf("%d", h);
    return 0;
}
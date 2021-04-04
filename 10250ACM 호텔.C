#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, g = 1, h, k = 0;
    scanf("%d", &a);
    while (a > k)
    {
        scanf("%d %d %d", &b, &c, &d);
        h = 0;
        g = 1;
        while (g <= c)
        {
            f = 0;
            while (f < b)
            {
                f++;
                h++;
                e = f * 100 + g * 1;
                if (d == h)
                {
                    printf("%d\n", e);
                    break;
                }
                if (b == f)
                {
                    break;

                }

                if (d == h)
                {
                    break;
                }
            }

            g++;
        }

        k++;
    }


    return 0;
}
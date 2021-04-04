#include <stdio.h>
int main()
{
    int a = 1, b, c, d, e, f, i = 1;
    while (i < 10000)
    {
        a = 1;
        while (a < 10000)
        {
            b = a / 1000;
            c = (a - b * 1000) / 100;
            d = (a - b * 1000 - c * 100) / 10;
            e = (a - b * 1000 - c * 100 - d * 10) % 10;
            f = b + c + d + e + a;
            if (i == f)
            {
                break;
            }
            a++;
            if (a == 10000)
            {
                printf("%d\n", i);
            }
        }
        i++;
    }
    return 0;
}
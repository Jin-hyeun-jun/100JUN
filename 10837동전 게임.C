#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    while (b > 0)
    {
        scanf("%d %d", &c, &d);
        if (c == d)
        {
            printf("1\n");
        }
        else if (d > c)
        {

            if (c + a - d >= d - 1)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        else if (c > d)
        {
            if (d + a - c >= c - 2)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }

        b--;
    }
    return 0;
}
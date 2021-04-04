#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    b = 0;
    d = 0;
    while (b < 5)
    {
        scanf("%d", &c);
        if (c == a)
        {
            d++;
        }
        b++;
    }
    printf("%d", d);
    return 0;
}
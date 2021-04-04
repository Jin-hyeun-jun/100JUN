#include <stdio.h>
int main()
{
    int a, b, c, d = 0, e;
    scanf("%d", &a);
    while (a > 0)
    {
        scanf("%d %d", &b, &c);
        e = c % b;
        d = d + e;
        a--;
    }
    printf("%d", d);


    return 0;
}
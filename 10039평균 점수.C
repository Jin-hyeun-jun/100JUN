#include <stdio.h>
int main()
{
    int a = 0;
    int b;
    int d = 0;
    while (a < 5)
    {
        scanf("%d", &b);
        a++;
        if (b < 40)
        {
            b = 40;
        }
        d = d + b;
    }
    printf("%d", d / 5);
}
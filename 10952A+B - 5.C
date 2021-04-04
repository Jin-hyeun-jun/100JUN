#include<stdio.h>
int main()
{
    int a, b, c, d;
    d = 0;
    while (d == 0)
    {
        scanf("%d %d", &a, &b);
        if (a == 0 && b == 0)
        {
            break;
        }
        c = a + b;
        printf("%d\n", c);
    }

    return 0;

}
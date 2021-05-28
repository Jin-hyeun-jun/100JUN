#include <iostream>
int main()
{
    int a, b, c, d, i;
    scanf("%d", &a);
    b = 0;
    d = 0;
    i = 0;
    while (b < a)
    {
        scanf("%d", &c);
        if (c == 1)
        {
            i++;
        }
        if (c == 0)
        {
            i = 0;
        }
        d = i + d;


        b++;
    }

    printf("%d", d);
    return 0;
}
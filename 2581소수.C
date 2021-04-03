#include <stdio.h>
int main()
{
    int a, b, c, d, e, j, k, h;
    scanf("%d", &a);
    k = a;
    scanf("%d", &b);
    h = b;
    e = 0;
    int i;
    j = 0;
    while (a <= b)
    {
        i = 1;
        d = 0;
        while (i < a)
        {
            if (a % i == 0 && i > 1)
            {
                break;
            }
            i++;
            if (i == a)
            {
                d = a;
            }
        }
        a++;
        e = e + d;

    }
    if (e == 0)
    {
        printf("-1");
        return 0;
    }
    while (k > 0)
    {
        i = 1;
        while (i < k)
        {

            if (k % i == 0 && i > 1)
            {
                break;
            }
            i++;
            if (i == k)
            {
                j = k;
                break;
            }
        }
        if (i == k)
        {
            break;
        }
        k++;
    }
    printf("%d\n", e);
    if (k == 1)
    {
        printf("2");
        return 0;
    }
    printf("%d", j);
    return 0;
}
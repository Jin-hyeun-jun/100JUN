#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    int i = 0;
    while (i < a)
    {
        scanf("%d %d %d", &b, &c, &d);
        if (b > c - d)
        {
            printf("do not advertise\n");
        }
        if (b == c - d)
        {
            printf("does not matter\n");
        }
        if (b < c - d)
        {
            printf("advertise\n");
        }
        i++;
    }
    return 0;
}
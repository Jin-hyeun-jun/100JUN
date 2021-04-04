#include <stdio.h>
int main() {
    int a, b, c, d, e, i = 0, h, j;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (d % c == 0 || d % b == 0 || d % a == 0)
    {
        printf("1");
        return 0;
    }
    while (c * i < d)
    {
        e = d - c * i;
        h = 0;
        if (e % a == 0 || e % b == 0)
        {
            printf("1");
            return 0;
        }
        while (h * b < e)
        {
            j = e - b * h;
            h++;
            if (j % a == 0)
            {
                printf("1");
                return 0;
            }
        }

        i++;
    }
    printf("0");

    return 0;
}
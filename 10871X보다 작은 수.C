#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d", &a, &b);
    int i = 0;
    while (i < a)
    {
        scanf("%d", &c);

        if (c < b)
        {
            printf("%d ", c);
        }

        i++;
    }

    return 0;
}


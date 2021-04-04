#include<stdio.h>
int main()
{
    int a, b;
    a = 1, b = 1;
    while (a != 0 && b != 0)
    {
        scanf("%d %d", &a, &b);
        if (a != 0 && b > a && b % a == 0)
        {
            printf("factor\n");
        }
        if (b != 0 && a > b && a % b == 0)
        {
            printf("multiple\n");
        }
        if (a != 0 && b % a != 0 && b != 0 && a % b != 0)
        {
            printf("neither\n");
        }

    }
    return 0;
}
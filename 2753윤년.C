#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    if (a % 400 == 0)
    {
        printf("1");
        return 0;
    }
    if (a % 100 == 0)
    {
        printf("0");
        return 0;
    }
    if (a % 4 == 0)
    {
        printf("1");
        return 0;
    }
    else
    {
        printf("0");
        return 0;
    }
    return 0;
}
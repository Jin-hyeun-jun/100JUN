#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (89 < a && a < 101)
    {
        printf("A");
        return 0;
    }
    if (79 < a && a < 90)
    {
        printf("B");
        return 0;
    }
    if (69 < a && a < 80)
    {
        printf("C");
        return 0;
    }
    if (59 < a && a < 70)
    {
        printf("D");
        return 0;
    }
    else
    {
        printf("F");
    }
    return 0;
}
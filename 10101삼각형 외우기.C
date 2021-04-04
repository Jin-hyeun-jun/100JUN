#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = a + b + c;
    if (d == 180)
    {
        if (a == b && b == c && a == c)
        {
            printf("Equilateral");
            return 0;
        }
        if (a == b)
        {
            printf("Isosceles");
        }
        if (a == c)
        {
            printf("Isosceles");
        }
        if (b == c)
        {
            printf("Isosceles");
        }
        if (a != b && b != c && a != c)
        {
            printf("Scalene");
        }
    }
    if (d != 180)
    {
        printf("Error");
    }
    return 0;
}
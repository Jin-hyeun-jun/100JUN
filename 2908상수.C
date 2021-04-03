#include <stdio.h>
int Rev(int v)
{
    int a, b, c, d;
    a = v / 100;
    b = (v - a * 100) / 10;
    c = (v - a * 100) % 10;
    d = c * 100 + b * 10 + a;
    return d;

}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    if (Rev(a) > Rev(b))
    {
        printf("%d", Rev(a));
        return 0;
    }
    if (Rev(a) < Rev(b))
    {
        printf("%d", Rev(b));
        return 0;
    }

}
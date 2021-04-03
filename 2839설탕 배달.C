#include<stdio.h>
int main()
{
    int a, b;
    scanf("%d", &a);
    int e = a;
    if (a % 5 == 0)
    {
        printf("%d", a / 5);
        return 0;
    }
    int i = 0;
    while (e > 5)
    {

        e = e - 5;
        i++;
        if (e == 3 || e == 6 || e == 9 || e == 12)
        {
            int j = e / 3;
            int h = i + j;
            printf("%d", h);
            return 0;
        }
    }
    if (a % 3 == 0)
    {
        printf("%d", a / 3);
        return 0;
    }
    printf("%d", -1);
    return 0;
}
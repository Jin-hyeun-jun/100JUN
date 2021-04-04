#include<stdio.h>
void(length)(int n)//¸ÇÀ§
{
    for (int i = 0; i < n; i++)
        printf("*");
}
void upshape(int n)
{
    int s = n - 4;
    int o = 1;
    while (s > 0)
    {
        for (int i = 0; i < o; i++)
        {
            printf("* ");
        }
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < o; i++)
        {
            printf(" *");
        }
        printf("\n");
        if (s == 1)
        {
            break;
        }
        for (int i = 0; i < o; i++)
        {
            printf("* ");
        }
        for (int i = 0; i < s; i++)
        {
            printf("*");
        }
        for (int i = 0; i < o; i++)
        {
            printf(" *");
        }
        printf("\n");
        s = s - 4;
        o++;
    }
}
void downshape(int n)
{
    int s = 1;
    int o = n / 4;
    while (s < n)
    {
        for (int i = 0; i < o; i++)
        {
            printf("* ");
        }
        for (int i = 0; i < s; i++)
        {
            printf("*");
        }
        for (int i = 0; i < o; i++)
        {
            printf(" *");
        }
        printf("\n");
        for (int i = 0; i < o; i++)
        {
            printf("* ");
        }
        for (int i = 0; i < s; i++)
        {
            printf(" ");
        }
        for (int i = 0; i < o; i++)
        {
            printf(" *");
        }
        printf("\n");
        s = s + 4;
        o--;
    }
}
int main()
{
    int a, b;
    scanf("%d", &a);
    if (a == 1)
    {
        printf("*");
        return 0;
    }
    b = 4 * (a - 1) + 1;
    length(b);
    printf("\n");
    upshape(b);
    downshape(b);
    length(b);
    return 0;
}
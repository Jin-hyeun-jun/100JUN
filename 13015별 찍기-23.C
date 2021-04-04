#include <stdio.h>
void printtopbot(int v)
{
    for (int i = 0; i < v; i++)
    {
        printf("*");
    }
    for (int i = 0; i < (v - 1) * 2 - 1; i++)
    {
        printf(" ");
    }
    for (int i = 0; i < v; i++)
    {
        printf("*");
    }
}
void printtopmid(int v, int y) //v=a,y=b=(a-1)*2-3;
{
    for (int a = 1; a < v; a++)
    {
        for (int i = 0; i < a; i++)
        {
            printf(" ");
        }
        printf("*");
        for (int i = 0; i < v - 2; i++)
        {
            printf(" ");
        }
        printf("*");
        for (int i = 0; i < y; i++)
        {
            printf(" ");
            if (i == y - 1)
            {
                printf("*");
            }
        }
        for (int i = 0; i < v - 2; i++)
        {
            printf(" ");
        }
        printf("*\n");
        y = y - 2;
    }
}
void printbotmid(int v, int y, int m)//v=a,y=b=(a-1)*2-3;m=a-2
{
    int b = 1;
    for (int a = 1; a < v - 1; a++)
    {
        for (int i = 0; i < m; i++)
        {
            printf(" ");
            if (i == m - 1)
            {
                printf("*");
            }
        }
        for (int i = 0; i < v - 2; i++)
        {
            printf(" ");
            if (i == v - 3)
            {
                printf("*");
            }
        }
        for (int i = 0; i < b; i++)
        {
            printf(" ");
            if (i == b - 1)
            {
                printf("*");
            }
        }
        for (int i = 0; i < v - 2; i++)
        {
            printf(" ");
            if (i == v - 3)
            {
                printf("*");
            }
        }
        b = b + 2;
        m--;
        printf("\n");
    }
}
int main()
{
    int a, b, c;
    scanf("%d", &a);
    b = (a - 1) * 2 - 3;
    c = a - 2;
    printtopbot(a);
    printf("\n");
    printtopmid(a, b);
    printbotmid(a, b, c);
    printtopbot(a);
    return 0;
}
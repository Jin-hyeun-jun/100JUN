#include <stdio.h>
void prints(int v, int n)
{

    for (int i = n; i < v; i++)
    {
        printf(" ");
    }
    printf("*");
    if (n > 1)
    {
        printf(" ");
    }

    for (int i = 2; i < n; i++)
    {
        printf("  ");
    }
    if (n > 1)
    {
        printf("*");
    }



    printf("\n");
}

int main() {
    int a;
    int b = 0;
    scanf("%d", &a);
    for (int i = 1; i < a; i++)
    {
        prints(a, i);
    }
    while (b < 2 * a - 1)
    {
        printf("*");
        b++;
    }
    return 0;
}
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
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        prints(a, i);

    }
    return 0;
}
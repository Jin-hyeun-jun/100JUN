#include <stdio.h>
void prints(int v, int n)
{
    for (int i = n; i < v; i++)
    {
        printf(" ");
    }
    printf("*");
    for (int i = 1; i < n; i++)
    {
        printf(" *");
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
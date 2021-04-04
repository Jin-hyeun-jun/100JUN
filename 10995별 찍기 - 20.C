#include <stdio.h>
void prints(int n)
{
    printf("*");
    int a = 1;
    while (a < n)
    {
        printf(" *");
        a++;
    }
}
void printss(int n)
{

    int a = 0;
    while (a < n)
    {
        printf(" *");
        a++;
    }
}
int main() {
    int a, b, c;
    scanf("%d", &a);
    b = a / 2;
    c = (a - 1) / 2;
    int i = 0;
    if (a % 2 == 0)
    {
        while (i < b)
        {
            prints(a);
            printf("\n");
            printss(a);
            printf("\n");
            i++;
        }
    }
    if (a % 2 == 1)
    {
        prints(a);
        printf("\n");
        while (i < c)
        {
            printss(a);
            printf("\n");
            prints(a);
            printf("\n");
            i++;
        }
    }
    return 0;
}
#include <stdio.h>


int main()
{
    int a, b, c, d;
    int arr[10] = {};
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    d = a * b * c;
    while (d > 0)
    {
        arr[d % 10]++;
        d = d / 10;
    }
    int i = 0;
    while (i < 10)
    {
        printf("%d\n", arr[i]);
        i++;
    }

    return 0;
}
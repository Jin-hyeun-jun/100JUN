#include <stdio.h>
int main()
{
    int a, b = 0, c = 1, d = 0, e = 0;
    int arr[42] = {};

    while (b < 10)
    {
        scanf("%d", &a);

        arr[a % 42]++;


        b++;

    }

    while (d < 42)
    {
        if (arr[d] > 0)
        {
            e++;
        }


        d++;
    }

    printf("%d", e);

}
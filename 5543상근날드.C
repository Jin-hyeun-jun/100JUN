#include <stdio.h>


int main()
{
    int a = 0, b = 0, c, d;
    int arr[3], arr1[2];
    scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr1[0], &arr1[1]);
    c = arr[a];
    while (a < 3)
    {

        if (c > arr[a])
        {
            c = arr[a];
        }
        a++;
    }
    d = arr1[b];
    while (b < 2)
    {

        if (d > arr1[b])
        {
            d = arr1[b];
        }
        b++;
    }
    printf("%d", c + d - 50);
    return 0;
}
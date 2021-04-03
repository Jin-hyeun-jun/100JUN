#include <stdio.h>
int main()
{
    int a, b, i = 0, c = 0;
    scanf("%d", &a);
    int arr[a] = {};
    while (a > i)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    for (int j = a - 1; j > 0; j--)
    {
        if (arr[j] - arr[j - 1] <= 0)
        {
            b = arr[j - 1] - arr[j] + 1;
            c = c + b;
            arr[j - 1] = arr[j - 1] - b;
        }
    }
    printf("%d", c);
    return 0;
}
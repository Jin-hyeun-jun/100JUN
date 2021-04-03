#include <stdio.h>
int main()
{
    int a, b, i = 0, c, d = 2000000000;
    scanf("%d %d", &a, &b);
    int arr[a] = {};
    while (a > i)
    {
        scanf("%d", &arr[i]);
        i++;
    }
    for (int i = 0; a - 2 > i; i++)
    {
        for (int j = i + 1; a - 1 > j; j++)
        {
            for (int l = j + 1; a > l; l++)
            {
                if (b == arr[i] + arr[j] + arr[l])
                {
                    printf("%d", b);
                    return 0;
                }
                if (arr[i] + arr[j] + arr[l] < b)
                {
                    c = b - (arr[i] + arr[j] + arr[l]);

                    if (d > c)
                    {
                        d = c;
                    }


                }
            }
        }
    }
    printf("%d", b - d);
}
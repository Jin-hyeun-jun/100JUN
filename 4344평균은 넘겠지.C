#include <stdio.h>
int main()
{
    int arr[1000] = {};
    int a, c, d = 0;
    int e, f, b;
    scanf("%d", &a);
    d = 0;
    while (d < a)
    {
        c = 0;
        e = 0;
        b = 0;
        scanf("%d", &f);
        while (c < f)
        {
            scanf("%d", &arr[c]);
            b = b + arr[c];
            c++;
        }
        c = 0;
        while (c < f)
        {
            if (arr[c] > b / f)
            {
                e++;
            }
            c++;
        }
        printf("%.3f%\n", 100 * (double)e / f);
        d++;
    }
    return 0;
}
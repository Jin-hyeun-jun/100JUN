#include <stdio.h>
int main()
{
    int a, b, c, i = 0, d = 0, e;
    scanf("%d %d", &a, &b);
    int arr[b + 1] = {};
    while (a > 0)
    {
        scanf("%d", &c);
        e = c;
        for (int i = 1; b >= e; i++)
        {
            e = c;
            e = e * i;
            if (e > b)//컴파일러 마다 틀리다 조심하자.
            {
                break;
            }
            arr[e]++;
        }
        a--;
    }
    while (b >= i)
    {
        if (arr[i] > 0)
        {
            d++;
        }
        i++;
    }
    printf("%d", d);
    return 0;
}
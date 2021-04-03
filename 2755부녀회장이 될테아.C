#include <stdio.h>
int main() {
    int a, b, c, arr[15][15] = {};
    scanf("%d", &a);
    for (int i = 0; i < 15; i++)
    {
        arr[0][i] = i;
    }
    for (int i = 0; i < 15; i++)
    {
        arr[i][1] = 1;
    }


    while (a > 0)
    {
        scanf("%d", &b);
        scanf("%d", &c);
        for (int j = 1; j <= b; j++)
        {
            for (int i = 1; i <= c; i++)
            {
                arr[j][i] = arr[j][i - 1] + arr[j - 1][i];
            }
        }
        printf("%d\n", arr[b][c]);
        a--;
    }


    return 0;
}
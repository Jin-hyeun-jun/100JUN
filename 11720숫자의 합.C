#include <stdio.h>

int main()
{
    int a, b, c, d = 0;
    scanf("%d", &a);
    char arr[101];
    scanf("%s", arr);

    for (int i = 0; i < a; i++)
    {

        d = d + arr[i] - 48;
    }
    printf("%d", d);
    return 0;
}
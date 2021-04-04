#include <stdio.h>
#include <string.h>
int main()
{
    int a, b = 1;
    char arr[101];
    scanf("%s", &arr);
    a = strlen(arr);
    if (a % 2 == 1)
    {
        for (int i = 0; i < a / 2; i++)
        {
            if (arr[i] != arr[a - 1 - i])//0 4//1 3//
            {
                b = 0;
                break;
            }
        }
    }
    if (a % 2 == 0)
    {
        for (int i = 0; i <= a / 2; i++)
        {
            if (arr[i] != arr[a - 1 - i])
            {
                b = 0;
                break;
            }
        }
    }
    printf("%d", b);
    return 0;
}
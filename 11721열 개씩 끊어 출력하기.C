#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char arr[101];

    scanf("%s", &arr);
    a = strlen(arr);
    if (a <= 10)
    {
        printf("%s", arr);
        return 0;
    }

    for (int k = 0; k < a / 10 + 1; k++)
    {
        for (int i = k * 10; i < 10 * (k + 1); i++)
        {
            if (arr[i] == 0)
            {
                break;
            }
            printf("%c", arr[i]);
        }
        printf("\n");
    }
    return 0;
}
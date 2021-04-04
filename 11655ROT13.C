#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char arr[1000];

    scanf("%[^\n]", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > 64 && arr[i] < 78)
        {
            arr[i] = arr[i] + 13;
        }
        else if (arr[i] > 77 && arr[i] < 91)
        {
            arr[i] = arr[i] - 13;
        }
        else if (arr[i] > 96 && arr[i] < 110)
        {
            arr[i] = arr[i] + 13;
        }
        else if (arr[i] > 109 & arr[i] < 123)
        {
            arr[i] = arr[i] - 13;
        }
    }
    printf("%s", arr);
    return 0;
}
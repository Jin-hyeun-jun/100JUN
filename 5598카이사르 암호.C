#include<stdio.h>
#include<string.h>
int main()
{
    int a;
    char arr[1001];
    scanf("%s", arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] > 64 && arr[i] < 68)
        {
            arr[i] = arr[i] + 23;

        }
        else if (arr[i] > 67 && arr[i] < 91)
        {
            arr[i] = arr[i] - 3;
        }
    }

    printf("%s", arr);
    return 0;
}
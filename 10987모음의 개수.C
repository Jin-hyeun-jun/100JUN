#include <stdio.h>
#include <string.h>
int main()
{
    int a, b = 0;
    char arr[101];

    scanf("%s", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 97 || arr[i] == 101 || arr[i] == 105 || arr[i] == 111 || arr[i] == 117)
        {
            b++;
        }

    }
    printf("%d", b);
    return 0;
}
#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    char arr[101];

    scanf("%s", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (i == 0)
        {
            printf("%c", arr[i]);
        }
        if (arr[i] == 45)
        {
            printf("%c", arr[i + 1]);
        }
    }
    return 0;
}
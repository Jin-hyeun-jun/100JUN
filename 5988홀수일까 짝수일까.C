#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    char arr[101];
    scanf("%d", &a);


    for (int i = 0; i < a; i++)
    {
        scanf("%s", arr);
        b = strlen(arr);
        if (arr[b - 1] % 2 == 0)
        {
            printf("even\n");
        }
        if (arr[b - 1] % 2 == 1)
        {
            printf("odd\n");
        }
    }

    return 0;
}
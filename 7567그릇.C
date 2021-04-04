#include <stdio.h>
#include <string.h>
#include<stdlib.h>
int main()
{
    int a, b, c = 10;
    char arr[101];
    scanf("%s", arr);
    b = strlen(arr);
    for (int i = 1; i < b; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            c = c + 10;
        }
        else
        {
            c = c + 5;
        }

    }
    printf("%d", c);
    return 0;
}
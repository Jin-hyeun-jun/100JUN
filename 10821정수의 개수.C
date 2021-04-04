#include<stdio.h>
#include<string.h>

int main()
{
    int a, b = 1;
    char arr[1000000] = { 0 };
    scanf("%[^\n]s", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == ',')
        {
            b = b + 1;
        }
    }
    printf("%d", b);
    return 0;
}
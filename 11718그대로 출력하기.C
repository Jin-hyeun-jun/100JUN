#include <stdio.h>
#include <string.h>
int main()
{
    int a, b = 0;
    char arr[11000];

    scanf("%[^\t]", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        printf("%c", arr[i]);
    }

    return 0;
}
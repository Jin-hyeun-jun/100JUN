#include <stdio.h>
#include <string.h>
int main()
{
    int a, b;
    char arr[1000];
    char arr1[1000];
    scanf("%s", &arr);
    scanf("%s", &arr1);
    a = strlen(arr);
    b = strlen(arr1);

    if (a >= b)
    {
        printf("go");
    }
    if (a < b)
    {
        printf("no");
    }
    return 0;
}
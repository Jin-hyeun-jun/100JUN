#include <stdio.h>
int main()
{
    int arr[3];
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    if (arr[0] == arr[1])
    {
        printf("%d", arr[0]);
        return 0;
    }
    if (arr[0] == arr[1])
    {
        printf("%d", arr[0]);
        return 0;
    }
    if (arr[0] == arr[2])
    {
        printf("%d", arr[0]);
        return 0;
    }
    if (arr[2] == arr[1])
    {
        printf("%d", arr[1]);
        return 0;
    }
    if (arr[0] > arr[1] && arr[2] > arr[0])
    {
        printf("%d", arr[0]);
        return 0;
    }
    if (arr[0] > arr[1] && arr[0] > arr[2] && arr[1] > arr[2])
    {
        printf("%d", arr[1]);
        return 0;
    }
    if (arr[0] > arr[1] && arr[0] > arr[2] && arr[2] > arr[1])
    {
        printf("%d", arr[2]);
        return 0;
    }
    if (arr[1] > arr[0] && arr[2] > arr[1])
    {
        printf("%d", arr[1]);
        return 0;
    }
    if (arr[1] > arr[0] && arr[1] > arr[2] && arr[0] > arr[2])
    {
        printf("%d", arr[0]);
        return 0;
    }
    if (arr[1] > arr[0] && arr[1] > arr[2] && arr[0] < arr[2])
    {
        printf("%d", arr[2]);
        return 0;
    }
    return 0;
}
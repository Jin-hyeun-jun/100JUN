#include<stdio.h>
#include<string.h>

int main()
{
    int a, k = 0;
    int big[101] = { 0 }, small[101] = { 0 }, num[101] = { 0 }, space[101] = { 0 };
    char arr[1000000] = { 0 };
    scanf("%[^\t]s", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 10)
        {
            k++;
        }
        if (48 <= arr[i] && arr[i] <= 57)
        {
            num[k]++;
        }
        if (65 <= arr[i] && arr[i] <= 90)
        {
            big[k]++;
        }
        if (97 <= arr[i] && arr[i] <= 122)
        {
            small[k]++;
        }
        if (arr[i] == 32)
        {
            space[k]++;
        }
    }
    for (int i = 0; i < k; i++)
    {
        printf("%d %d %d %d\n", small[i], big[i], num[i], space[i]);
    }
    return 0;
}
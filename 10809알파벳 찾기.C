#include<stdio.h>
#include<string.h>
int main()
{
    int a, b = 0;
    char arr[101];
    int arr1[26];
    for (int i = 0; i < 26; i++)
    {
        arr1[i] = -1;
    }
    scanf("%s", &arr);
    a = strlen(arr);
    for (int i = 0; i < a; i++)//처음넣는것 추가
    {
        if (arr1[arr[i] - 97] == -1)
        {
            arr1[arr[i] - 97] = i;
        }

    }
    for (int i = 0; i < 26; i++)
    {
        printf("%d ", arr1[i]);
    }



    return 0;
}
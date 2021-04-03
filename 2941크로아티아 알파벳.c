#include<stdio.h>
#include<string.h>
int main()
{
    int a, b;
    char arr[101] = {};
    scanf("%s", &arr);

    b = strlen(arr);
    for (int i = 0; i < 99; i++)
    {
        if (arr[i] == 'c' && arr[i + 1] == '=')
        {
            b--;

        }
        if (arr[i] == 'c' && arr[i + 1] == '-')
        {
            b--;

        }
        if (arr[i] == 'd' && arr[i + 1] == '-')
        {
            b--;

        }
        if (arr[i] == 'l' && arr[i + 1] == 'j')//
        {
            b--;

        }
        if (arr[i] == 'n' && arr[i + 1] == 'j')//
        {
            b--;

        }
        if (arr[i] == 's' && arr[i + 1] == '=')
        {
            b--;

        }
        if (arr[i] == 'z' && arr[i + 1] == '=')
        {
            b--;

        }


    }
    for (int i = 0; i < 98; i++)
    {
        if (arr[i] == 'd' && arr[i + 1] == 'z' && arr[i + 2] == '=')//
        {
            b--;
        }

    }
    printf("%d\n", b);
    return 0;
}
//개별로 하면 다 먹는다.
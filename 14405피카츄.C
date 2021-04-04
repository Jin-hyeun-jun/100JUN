#include <stdio.h>
#include <string.h>
int main()
{
    int a = 0, b;
    char arr[5001];
    scanf("%s", &arr);
    b = strlen(arr);
    for (int i = 0; i < b; i++)
    {
        if (arr[i] != 'p' && arr[i] != 'i' && arr[i] != 'k' && arr[i] != 'a' && arr[i] != 'c' && arr[i] != 'h' && arr[i] != 'u')
        {
            a++;
            break;
        }
        if (arr[i] == 'p' && arr[i + 1] != 'i')//pi
        {
            a++;
            break;
        }
        if (arr[i] == 'i' && arr[i - 1] != 'p')//pi
        {
            a++;
            break;
        }
        if (arr[i] == 'k' && arr[i + 1] != 'a')//ka
        {
            a++;
            break;
        }
        if (arr[i] == 'a' && arr[i - 1] != 'k')//ka
        {
            a++;
            break;
        }
        if (arr[i] == 'c' && (arr[i + 1] != 'h' || arr[i + 2] != 'u'))
        {
            a++;
            break;
        }
        if (arr[i] == 'h' && (arr[i + 1] != 'u' || arr[i - 1] != 'c'))
        {
            a++;
            break;
        }
        if (arr[i] == 'u' && (arr[i - 1] != 'h' || arr[i - 2] != 'c'))
        {
            a++;
            break;
        }
    }
    if (a == 0)
    {
        printf("YES");
    }
    if (a != 0)
    {
        printf("NO");
    }
    return 0;
}
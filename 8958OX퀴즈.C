#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    char arr[81];



    for (int i = 0; i < a; i++)
    {
        c = 0, d = 0;
        scanf("%s", arr);
        b = strlen(arr);
        for (int k = 0; k < b; k++)
        {
            if (arr[k] == 'X')
            {
                d = 0;
            }

            else if (arr[k] == 'O' && arr[k - 1] == 'O')
            {
                d = d + 1;
            }
            else if (arr[k] == 'O' && arr[k - 1] != 'O')
            {
                d = 1;
            }
            c = c + d;
        }
        printf("%d\n", c);

    }

    return 0;
}
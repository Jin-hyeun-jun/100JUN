#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c;
    scanf("%d", &a);
    char arr[21];

    while (a > 0)
    {
        scanf("%d %s", &b, &arr);
        c = strlen(arr);

        for (int i = 0; i < c; i++)
        {
            for (int k = 0; k < b; k++)
            {
                printf("%c", arr[i]);
            }

        }


        printf("\n");
        a--;
    }
}
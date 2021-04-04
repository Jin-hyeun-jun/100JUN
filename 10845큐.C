#include <stdio.h>
#include <string.h>
int main()
{
    int a, b, c = 0, i = 0;
    scanf("%d", &a);
    int arr[a] = { 0 };
    char stack[10];
    while (a > 0)
    {
        scanf("%s", &stack);
        if (strcmp(stack, "push") == 0)
        {
            scanf("%d", &b);
            arr[i] = b;
            i++;
        }
        if (strcmp(stack, "pop") == 0)
        {
            if (arr[c] == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", arr[c]);
                c++;
            }
        }
        if (strcmp(stack, "size") == 0)
        {
            printf("%d\n", i - c);
        }
        if (strcmp(stack, "empty") == 0)
        {
            if (i - c == 0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        if (strcmp(stack, "front") == 0)
        {
            if (i - c == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", arr[c]);
            }
        }
        if (strcmp(stack, "back") == 0)
        {
            if (i - c == 0)
            {
                printf("-1\n");
            }
            else
            {
                printf("%d\n", arr[i - 1]);
            }
        }

        a--;
    }
    return 0;
}
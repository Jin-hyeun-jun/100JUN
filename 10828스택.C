#include <stdio.h>
#include <string.h>
int main()
{
    int a, i = 0;
    scanf("%d", &a);
    int arr[a] = { 0 };
    char stack[10];
    while (a > 0)
    {
        scanf("%s", &stack);
        if (strcmp(stack, "push") == 0)
        {
            scanf("%d", &arr[i]);
            i++;
        }
        if (strcmp(stack, "pop") == 0)
        {
            if (i != 0)
            {
                printf("%d\n", arr[i - 1]);
                i--;
            }
            else
            {
                printf("-1\n");
            }
        }
        if (strcmp(stack, "size") == 0)
        {
            if (i != 0)
            {
                printf("%d\n", i);
            }
            else
            {
                printf("0\n");
            }
        }
        if (strcmp(stack, "empty") == 0)
        {
            if (i == 0)
            {
                printf("1\n");
            }
            else
            {
                printf("0\n");
            }
        }
        if (strcmp(stack, "top") == 0)
        {
            if (i != 0)
            {
                printf("%d\n", arr[i - 1]);
            }
            else
            {
                printf("-1\n");
            }
        }
        a--;
    }
    return 0;
}
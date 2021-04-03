#include <stdio.h>
int main()
{
    int a;
    int b = 0;
    for (int i = 1; i < 9; i++)
    {
        scanf("%d", &a);
        if (a == i)
        {
            b++;
        }
        if (a == 9 - i)
        {
            b--;
        }
    }
    if (b == 8)
    {
        printf("ascending");
    }
    else if (b == -8)
    {
        printf("descending");
    }
    else
    {
        printf("mixed");
    }
    return 0;
}
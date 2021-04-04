#include <stdio.h>
int main()
{
    int a, b, c = 0;
    scanf("%d", &a);
    for (int i = 1; i < a + 1; i++)
    {
        scanf("%d", &b);
        if (i != b)
        {
            c++;
        }
    }
    printf("%d", c);
    return 0;
}
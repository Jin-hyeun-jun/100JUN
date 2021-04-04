#include <stdio.h>
char star[397][397] = { 0 };
void topprintf(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("*");
    }
    printf("\n*\n");
}
void changestar(int n, int m)
{
    int a = 1, b = 0, c = 2;
    for (int i = n - 1; i >= 0; i--)
    {
        star[0][i] = '*';
    }
    while (m > 0)
    {
        for (a; a <= n - 1; a++)//오른쪽
        {
            star[a][b] = '*';
        }
        a--;
        for (b; b <= n - 1; b++)//위로
        {
            star[a][b] = '*';
        }
        b--;
        for (a; a >= c; a--)//왼쪽
        {
            star[a][b] = '*';
        }
        a++;
        for (b; b >= c; b--)//아래
        {
            star[a][b] = '*';
        }
        b++;
        n = n - 2;
        c = c + 2;
        m--;
    }
}
void printfstar(int n)
{
    for (int i = n - 1; i >= 0; i--)
    {
        for (int k = 0; k < n; k++)
        {
            printf("%c", star[k][i]);
        }
        printf("\n");
    }
}
int main()
{
    int a, b;
    scanf("%d", &a);
    b = 4 * (a - 1) + 1;
    if (a == 1)
    {
        printf("*");
        return 0;
    }
    topprintf(b);
    for (int i = 0; i < b; i++)
    {
        for (int k = 0; k < b; k++)
        {
            star[i][k] = ' ';
        }
    }
    changestar(b, a - 1);
    printfstar(b);
    return 0;
}
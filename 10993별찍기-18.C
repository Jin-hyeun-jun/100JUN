#include<stdio.h>
#include<math.h>
char star[1100][2200] = {};
void full_blank(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            star[i][k] = ' ';
        }
        m = m - 1;
    }
}
void full_blank1(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            star[i][k] = ' ';
        }
        m = m + 1;
    }
}
void full_star(int n, int m, int p)
{
    int q = n;
    int i, k;//가로 새로 나타내는놈
    if (n % 2 == 0)//첫번째 시작줄 n이 짝수일때
    {
        i = 0;
        for (k = 0; k < p; k++)
        {
            star[i][k] = '*';
        }
    }
    if (n % 2 == 1)//첫번째 시작줄 n이 홀수일때
    {
        i = m - 1;
        for (k = 0; k < p; k++)
        {
            star[i][k] = '*';
        }
    }
    if (n % 2 == 0)
    {
        for (int r = 0; r < k / 2; r++)
        {
            star[i + 1][r + 1] = star[i][r];
            i++;
        }
        i = 0;
        for (int r = k - 1; r > k / 2; r--)
        {
            star[i + 1][r - 1] = star[i][r];
            i++;
        }
    }
    if (n % 2 == 1)
    {
        for (int r = 0; r < k / 2; r++)
        {
            star[i - 1][r + 1] = star[i][r];
            if (r != k / 2 - 1)
            {
                i--;
            }
        }
        i = m - 1;
        for (int r = k - 1; r > k / 2; r--)
        {
            star[i - 1][r - 1] = star[i][r];
            if (r != k / 2 - 1)
            {
                i--;
            }
        }
    }

    n = n - 1;
    while (n >= 1)
    {
        int a, b, c, d, e, f, g, h;

        if (q - 1 == n)
        {
            f = m / 2;
            h = f;
        }
        if (q - 1 != n)
        {
            f = (h + e) / 2;
            h = f;
            if ((h + e) % 2 == 1)
            {
                f = f + 1;
            }
        }
        g = f;
        a = (pow(2, n + 1) - 3) / 2;
        b = p / 2;
        c = b + a;
        d = b - a;
        for (k = d; k <= c; k++)
        {
            star[f][k] = '*';
        }
        if (n % 2 == 0)
        {
            for (int r = d; r < b; r++)
            {
                star[f + 1][r + 1] = star[f][r];
                f++;
            }
            f = g;
            for (int r = c; r > b; r--)
            {
                star[f + 1][r - 1] = star[f][r];
                f++;
            }
            e = f - 1;
        }
        if (n % 2 == 1)
        {
            for (int r = d; r < b; r++)
            {
                star[f - 1][r + 1] = star[f][r];
                f--;
            }
            f = g;
            for (int r = c; r > b; r--)
            {
                star[f - 1][r - 1] = star[f][r];
                f--;
            }
            e = f + 1;
        }
        n--;
    }


}
void printf_star(int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < m; k++)
        {
            printf("%c", star[i][k]);
        }
        m = m - 1;
        if (i != n - 1)
        {
            printf("\n");
        }
    }
}void printf_star1(int n, int o)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < o; k++)
        {
            printf("%c", star[i][k]);
        }
        o = o + 1;
        if (i != n - 1)
        {
            printf("\n");
        }
    }
}
int main()
{
    int a, b, c, d;
    scanf("%d", &a);
    b = pow(2, a) - 1;
    c = pow(2, a + 1) - 3;
    d = c / 2;
    if (a % 2 == 0)
    {
        full_blank(b, c);
    }
    if (a % 2 == 1)
    {
        full_blank1(c, d + 1);
    }
    full_star(a, b, c);
    if (a % 2 == 0)
    {
        printf_star(b, c);
    }
    if (a % 2 == 1)
    {
        printf_star1(b, d + 1);
    }
    return 0;
}
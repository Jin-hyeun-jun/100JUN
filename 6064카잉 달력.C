#include <stdio.h>
int main()
{
    int a, b, c, d, e, f, k, m;
    scanf("%d", &e);
    f = 0;
    while (f < e)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        m = c;
        d = d % b;

        while (m <= a * b && m % b != d)
        {
            m = m + a;//여기서 m%b가 0 5가 나오게 될 시 5가 나올순 없고 무조건 0이 되는 것인가.? 
        }

        if (a * b < m)
        {
            printf("-1\n");

        }
        else
        {
            printf("%d\n", m);
        }
        f++;
    }
    return 0;
}